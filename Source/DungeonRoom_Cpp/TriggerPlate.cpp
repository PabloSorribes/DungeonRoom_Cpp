#include "TriggerPlate.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "I_Weight.h"
#include "MovingWall.h"

// Sets default values
ATriggerPlate::ATriggerPlate()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	RootComponent = root;

	//Adds the actual mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));
	mesh->SetupAttachment(root);

	trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	trigger->SetupAttachment(mesh);
	trigger->bGenerateOverlapEvents = true;
	trigger->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	trigger->OnComponentBeginOverlap.AddDynamic(this, &ATriggerPlate::OnOverlapBegin);
	trigger->OnComponentEndOverlap.AddDynamic(this, &ATriggerPlate::OnOverlapEnd);

	FName collisionPreset = "Trigger";
	trigger->SetCollisionProfileName(collisionPreset);
}

// Called when the game starts or when spawned
void ATriggerPlate::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATriggerPlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATriggerPlate::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (!door) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Door is not set!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Entering trigger"));

	//Add Weight if implements interface
	if (OtherActor->Implements<UI_Weight>())
	{
		currentPressure += II_Weight::Execute_GetObjectWeight(OtherActor);
		UE_LOG(LogTemp, Warning, TEXT("CurrentPressure: %f. RequiredPressure: %f"), currentPressure, requiredPressure);

		if (currentPressure >= requiredPressure)
		{
			UE_LOG(LogTemp, Warning, TEXT("Weight is success!"));

			//FlipFlop for changing the behaviour of a trap.
			if (openGateOnRequiredPressure)
			{
				ResetTrap();
			}
			else
			{
				TriggerTrap();
			}
		}
	}
}

void ATriggerPlate::OnOverlapEnd(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	if (!door)
	{
		UE_LOG(LogTemp, Warning, TEXT("Door is not set!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Exiting trigger"));

	//Remove Weight when a weight-object leaves the trigger.
	if (OtherActor->Implements<UI_Weight>())
	{
		currentPressure -= II_Weight::Execute_GetObjectWeight(OtherActor);
		if (currentPressure < 0)
		{
			currentPressure = 0;
		}

		UE_LOG(LogTemp, Warning, TEXT("CurrentPressure: %f. RequiredPressure: %f"), currentPressure, requiredPressure);

		if (currentPressure < requiredPressure)
		{
			UE_LOG(LogTemp, Warning, TEXT("Too little pressure!"));

			//FlipFlop for changing the behaviour of a trap.
			if (openGateOnRequiredPressure)
			{
				TriggerTrap();
			}
			else
			{
				ResetTrap();
			}
		}
	}
}

void ATriggerPlate::ResetTrap_Implementation()
{
	door->OpenDoor();
}

void ATriggerPlate::TriggerTrap_Implementation()
{
	door->CloseDoor();
}
#include "TriggerPlate.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"



// Sets default values
ATriggerPlate::ATriggerPlate()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Adds the actual mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));
	RootComponent = mesh;

	trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	trigger->SetupAttachment(mesh);
	trigger->bGenerateOverlapEvents = true;
	trigger->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	trigger->OnComponentBeginOverlap.AddDynamic(this, &ATriggerPlate::OnOverlapBegin);
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
	UE_LOG(LogTemp, Warning, TEXT("Entering trigger"));
}
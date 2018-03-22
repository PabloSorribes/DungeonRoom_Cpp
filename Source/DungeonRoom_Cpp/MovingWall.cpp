#include "MovingWall.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"


// Sets default values
AMovingWall::AMovingWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	RootComponent = root;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));
	mesh->SetupAttachment(root);
}

// Called when the game starts or when spawned
void AMovingWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



void AMovingWall::OpenDoor()
{
	targetLocation = doorOpenPosition;

	if (closingTimerTick.IsValid()) 
	{
		GetWorldTimerManager().ClearTimer(closingTimerTick);
	}

	GetWorldTimerManager().SetTimer(openingTimerTick, this, &AMovingWall::MoveDoor, updateInterval, true, 0);

	UE_LOG(LogTemp, Warning, TEXT("Opening Door!"));
}

void AMovingWall::CloseDoor()
{
	targetLocation = doorClosedPosition;

	if (openingTimerTick.IsValid())
	{
		GetWorldTimerManager().ClearTimer(openingTimerTick);
	}

	GetWorldTimerManager().SetTimer(closingTimerTick, this, &AMovingWall::MoveDoor, updateInterval, true, 0);

	UE_LOG(LogTemp, Warning, TEXT("Closing Door!"));
}


void AMovingWall::MoveDoor() 
{
	FVector currentLocation = mesh->GetComponentTransform().GetLocation();
	FVector newLocation = FMath::VInterpTo(currentLocation, targetLocation + this->GetActorLocation(), updateInterval, interpolationSpeed);
	ETeleportType teleport = ETeleportType::None;
	
	mesh->SetWorldLocation(newLocation, false, nullptr, teleport);

	FVector length = currentLocation - (targetLocation + this->GetActorLocation());
	float distance = length.Size();

	//Stop timers when close enough
	if (distance < 0.1f)
	{
		GetWorldTimerManager().ClearTimer(openingTimerTick);
		GetWorldTimerManager().ClearTimer(closingTimerTick);
	}

	//UE_LOG(LogTemp, Warning, TEXT("Moving! Distance: %f. GameTime: %f"), distance, GetGameTimeSinceCreation());
}
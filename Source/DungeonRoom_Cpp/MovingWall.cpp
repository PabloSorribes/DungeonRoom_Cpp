#include "MovingWall.h"
#include "Components/StaticMeshComponent.h"



// Sets default values
AMovingWall::AMovingWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));
	RootComponent = mesh;
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
	float updateInterval = .006f;

	if (closingTimerTick.IsValid()) 
	{
		GetWorldTimerManager().ClearTimer(closingTimerTick);
	}

	GetWorldTimerManager().SetTimer(openingTimerTick, this, &AMovingWall::MoveDoor, updateInterval, true, 0);
}

void AMovingWall::CloseDoor()
{
	float updateInterval = .006f;

	if (openingTimerTick.IsValid())
	{
		GetWorldTimerManager().ClearTimer(openingTimerTick);
	}

	GetWorldTimerManager().SetTimer(closingTimerTick, this, &AMovingWall::MoveDoor, updateInterval, true, 0);
}

void AMovingWall::MoveDoor()
{
	FVector currentLocation = mesh->GetComponentTransform().GetLocation();

	FVector newLocation = FMath::VInterpTo(currentLocation, targetLocation + this->GetActorLocation(), GetWorld()->GetDeltaSeconds(), interpolationSpeed);

	mesh->SetWorldLocation(newLocation, false, nullptr, ETeleportType::None);
}


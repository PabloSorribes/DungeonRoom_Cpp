#include "TriggerPlate.h"
#include "Components/StaticMeshComponent.h"



// Sets default values
ATriggerPlate::ATriggerPlate()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Adds the actual mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));
	RootComponent = mesh;

	//trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("MahTrigger"));
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


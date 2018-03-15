// Fill out your copyright notice in the Description page of Project Settings.

#include "Master_Pickup.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AMaster_Pickup::AMaster_Pickup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Adds the actual mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));

	/*RootComponent = mesh;
	mesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<StaticMesh>CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));*/

}

// Called when the game starts or when spawned
void AMaster_Pickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMaster_Pickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMaster_Pickup::Pickup_Implementation(USceneComponent * AttachPoint, bool & success)
{
	//Nullcheck
	if (!AttachPoint || !mesh)
	{
		return;
	}

	//Actual movement toward the AttachPoint
	FAttachmentTransformRules rules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;
	mesh->SetSimulatePhysics(false);

	//Checks to see if it all worked
	if (mesh->AttachToComponent(AttachPoint, rules, NAME_None))
	{
		TheAttachedPoint = AttachPoint;
		success = true;
	}
	else
	{
		TheAttachedPoint = nullptr;
		success = false;
	}
}

void AMaster_Pickup::Drop_Implementation(bool & success)
{
	if (TheAttachedPoint)
	{
		FDetachmentTransformRules rules = FDetachmentTransformRules::KeepRelativeTransform;
		mesh->DetachFromComponent(rules);
		mesh->SetSimulatePhysics(true);
		attachedTo = nullptr;
		success = true;
	}
	else
	{
		success = false;
	}
}


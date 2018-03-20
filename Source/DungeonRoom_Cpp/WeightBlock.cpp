// Fill out your copyright notice in the Description page of Project Settings.

#include "WeightBlock.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AWeightBlock::AWeightBlock()
{
	//AMaster_Pickup::AMaster_Pickup();

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	mesh->SetSimulatePhysics(true);
	//myMesh->SetSimulatePhysics(true);
}

float AWeightBlock::GetObjectWeight_Implementation()
{
	return 1.0f;
}
// Fill out your copyright notice in the Description page of Project Settings.

#include "WeightBlock.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AWeightBlock::AWeightBlock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	startScale = GetActorRelativeScale3D();

	SetWeight();
}

void AWeightBlock::BeginPlay()
{
	Super::BeginPlay();

	//The Weight-float is not set by the call in the construction script for some reason. Have to hax it here.
	SetWeight();
}

///<summary>
///Is called by construction script in Blueprint
///</summary>
void AWeightBlock::SetWeight_Implementation()
{
	switch (blockSize)
	{
	case EBlockSize::Small:
		mesh->SetMaterial(0, smallColor);
		blockWeight = 1.0f;
		break;

	case EBlockSize::Medium:
		mesh->SetMaterial(0, middleColor);
		SetActorRelativeScale3D(startScale * 1.25f);
		blockWeight = 2.0f;
		break;

	case EBlockSize::Big:
		mesh->SetMaterial(0, bigColor);
		SetActorRelativeScale3D(startScale * 1.50f);
		blockWeight = 3.0f;
		break;

	default:
		break;
	}
}

float AWeightBlock::GetObjectWeight_Implementation()
{
	return blockWeight;
}
// Fill out your copyright notice in the Description page of Project Settings.

#include "WeightBlock.h"


// Sets default values
AWeightBlock::AWeightBlock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

float AWeightBlock::GetObjectWeight_Implementation()
{
	return 1.0f;
}

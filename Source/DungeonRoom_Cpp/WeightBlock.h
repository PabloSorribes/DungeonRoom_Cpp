// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Master_Pickup.h"
#include "I_Weight.h"
#include "WeightBlock.generated.h"

/**
 *
 */
UCLASS()
class DUNGEONROOM_CPP_API AWeightBlock : public AMaster_Pickup, public II_Weight
{
	GENERATED_BODY()

public:

	AWeightBlock();

	/*UPROPERTY(EditAnywhere)
		UStaticMeshComponent* myMesh = mesh;*/

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
		float GetObjectWeight();
	virtual float GetObjectWeight_Implementation()override;
};

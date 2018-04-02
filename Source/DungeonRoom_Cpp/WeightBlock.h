// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Master_Pickup.h"
#include "I_Weight.h"
#include "WeightBlock.generated.h"

UENUM(BlueprintType)
enum class EBlockSize : uint8
{
	Small UMETA(DisplayName = "Small"),
	Medium UMETA(DisplayName = "Medium"),
	Big UMETA(DisplayName = "Big")
};

UCLASS()
class DUNGEONROOM_CPP_API AWeightBlock : public AMaster_Pickup, public II_Weight
{
	GENERATED_BODY()

public:
	AWeightBlock();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EBlockSize blockSize;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* smallColor = nullptr;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* middleColor = nullptr;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* bigColor = nullptr;

	float blockWeight = 1.0f;

	FVector startScale;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "0_OwnFunctions")
		void SetWeight();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
		float GetObjectWeight();
	virtual float GetObjectWeight_Implementation()override;
};

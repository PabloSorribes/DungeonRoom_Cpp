#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCppActor.h"
#include "TriggerPlate.generated.h"

class UBoxComponent;
class AMovingWall;

UCLASS()
class DUNGEONROOM_CPP_API ATriggerPlate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerPlate();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* mesh = nullptr;

	UPROPERTY(EditAnywhere)
		UBoxComponent* trigger = nullptr;

	UPROPERTY(EditAnywhere)
		AMovingWall* door = nullptr;

	float currentPressure;
	float requiredPressure = 3.0f;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* baseColor = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "0_OwnFunctions")
		void OnOverlapBegin(
			UPrimitiveComponent* OverlappedComp, 
			AActor* OtherActor, 
			UPrimitiveComponent* OtherComp, 
			int32 OtherBodyIndex, 
			bool bFromSweep, 
			const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "0_OwnFunctions")
		void OnOverlapEnd(
			UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);

	UFUNCTION(BlueprintNativeEvent, Category = "0_OwnFunctions")
	void OnTrapSprung();

	UFUNCTION(BlueprintNativeEvent, Category = "0_OwnFunctions")
	void OnTrapSolved();
};

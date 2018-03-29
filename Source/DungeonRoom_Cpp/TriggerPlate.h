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

	UPROPERTY(EditAnywhere)
		USceneComponent* root = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* mesh = nullptr;

	UPROPERTY(EditAnywhere)
		UBoxComponent* trigger = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMovingWall* door = nullptr;

	float currentPressure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float requiredPressure = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterialInterface* baseColor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool openGateOnRequiredPressure = true;

	//Check for not double triggering the audio
	bool isGateOpen;


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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "0_OwnFunctions")
		void ResetTrap();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "0_OwnFunctions")
		void TriggerTrap();
};

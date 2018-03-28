#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingWall.generated.h"

UCLASS()
class DUNGEONROOM_CPP_API AMovingWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingWall();

	UPROPERTY(EditAnywhere)
		USceneComponent* root = nullptr;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh = nullptr;

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget = true))
		FVector doorOpenPosition;

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget = true))
		FVector doorClosedPosition;

	FVector targetLocation;
	FTimerHandle openingTimerTick;
	FTimerHandle closingTimerTick;

	UPROPERTY(EditAnywhere)
		float interpolationSpeed = 10.0f;

	float updateInterval = .006f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "0_OwnFunctions")
		void OpenDoor();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "0_OwnFunctions")
		void CloseDoor();

	void MoveDoor();

	UFUNCTION(BlueprintImplementableEvent, Category = "0_OwnFunctions")
		void OnDoorFinishedMoving();
};

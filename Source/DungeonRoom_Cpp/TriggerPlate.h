#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerPlate.generated.h"

class UBoxComponent;

UCLASS()
class DUNGEONROOM_CPP_API ATriggerPlate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerPlate();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh = nullptr;

	UPROPERTY(EditAnywhere)
		UBoxComponent* trigger = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "0_OwnClasses")
		void OnOverlapBegin(
			UPrimitiveComponent* OverlappedComp, 
			AActor* OtherActor, 
			UPrimitiveComponent* OtherComp, 
			int32 OtherBodyIndex, 
			bool bFromSweep, 
			const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "0_OwnClasses")
		void OnOverlapEnd(
			UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);
};
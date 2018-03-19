#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "I_Pickupable.h"
#include "Master_Pickup.generated.h"

class UStaticMeshComponent;

UCLASS()
class DUNGEONROOM_CPP_API AMaster_Pickup : public AActor, public II_Pickupable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMaster_Pickup();
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh = nullptr;

	UPROPERTY(EditAnywhere)
		float weight = 1.0f;

	//Variable to keep track if the object is being picked up right now.
	UPROPERTY(EditAnywhere)
		USceneComponent* TheAttachedPoint = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent* attachedTo = nullptr;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
		void Pickup(USceneComponent* AttachPoint, bool & success);
		virtual void Pickup_Implementation(USceneComponent* AttachPoint, bool & success)override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
		void Drop(bool & success);
		virtual void Drop_Implementation(bool & success)override;
	
};

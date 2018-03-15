#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "I_Pickupable.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class DUNGEONROOM_CPP_API UI_Pickupable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DUNGEONROOM_CPP_API II_Pickupable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
		void Pickup(USceneComponent* AttachPoint, bool & success);

	UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
		void Drop(bool & success);
};

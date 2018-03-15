#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "I_Weight.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class DUNGEONROOM_CPP_API UI_Weight : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DUNGEONROOM_CPP_API II_Weight
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
		float GetObjectWeight();
		//virtual float GetWeight_Implementation()override;
};

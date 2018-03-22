#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "I_Weight.h"
#include "DungeonRoom_CppCharacter.generated.h"

UCLASS(config = Game)
class ADungeonRoom_CppCharacter : public ACharacter, public II_Weight
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	//Boom to move the object out of the way of walls
	UPROPERTY(EditAnywhere)
		USpringArmComponent* boomArm = nullptr;

	////Component to attach held objects to.
	UPROPERTY(EditAnywhere)
		USceneComponent* holdingComponent = nullptr;

	FHitResult hit;

	bool isHoldingObject;

	UPROPERTY(EditAnywhere)
		float characterWeight = 2.0f;

public:
	ADungeonRoom_CppCharacter();

	void CreateFollowCamera();

	void CreateCameraBoom();

	void ConfigureCharacterMovement();

	void InputTurnRate();

	void RotationControl();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
		float GetObjectWeight();
	virtual float GetObjectWeight_Implementation()override;

protected:

	virtual void BeginPlay() override;

	void Use();

	void StopUsing();

	void Throw();

	void LineTrace();

	void PickupObject();

	void DropObject();

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

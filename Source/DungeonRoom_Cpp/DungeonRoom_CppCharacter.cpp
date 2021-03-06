// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DungeonRoom_CppCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "I_Pickupable.h"
#include "DrawDebugHelpers.h"

//////////////////////////////////////////////////////////////////////////
// ADungeonRoom_CppCharacter

// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character)
// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

ADungeonRoom_CppCharacter::ADungeonRoom_CppCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	InputTurnRate();
	RotationControl();
	ConfigureCharacterMovement();
	CreateCameraBoom();
	CreateFollowCamera();

	//Spring arm
	boomArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("BoomArm"));
	boomArm->SetupAttachment(RootComponent);

	////Holding point
	holdingComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HoldingComponent"));
	holdingComponent->AttachTo(boomArm, USpringArmComponent::SocketName);

	//TODO: This doesn't work for some reason.
	//holdingComponent->SetupAttachment(RootComponent);

}

void ADungeonRoom_CppCharacter::CreateFollowCamera()
{
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

///<summary>
/// Create a camera boom (pulls in towards the player if there is a collision).
///<remarks> This is a remark </remarks>
///</summary>
void ADungeonRoom_CppCharacter::CreateCameraBoom()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
}

void ADungeonRoom_CppCharacter::ConfigureCharacterMovement()
{
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
}

///<summary>
/// Set our turn rates for input
///</summary>
void ADungeonRoom_CppCharacter::InputTurnRate()
{
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;
}

///<summary>
/// Don't rotate when the controller rotates. Let that just affect the camera.
///</summary>
void ADungeonRoom_CppCharacter::RotationControl()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

float ADungeonRoom_CppCharacter::GetObjectWeight_Implementation()
{
	return characterWeight;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ADungeonRoom_CppCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Use", IE_Pressed, this, &ADungeonRoom_CppCharacter::Use);
	PlayerInputComponent->BindAction("Use", IE_Released, this, &ADungeonRoom_CppCharacter::StopUsing);

	PlayerInputComponent->BindAction("Throw", IE_Pressed, this, &ADungeonRoom_CppCharacter::Throw);

	PlayerInputComponent->BindAxis("MoveForward", this, &ADungeonRoom_CppCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADungeonRoom_CppCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ADungeonRoom_CppCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ADungeonRoom_CppCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ADungeonRoom_CppCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ADungeonRoom_CppCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ADungeonRoom_CppCharacter::OnResetVR);
}

// Called when the game starts or when spawned
void ADungeonRoom_CppCharacter::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("Setting da pickup point"));
	//holdingComponent->AttachTo(boomArm, USpringArmComponent::SocketName);
}

void ADungeonRoom_CppCharacter::Use()
{
	LineTrace();
}

///Source: https://youtu.be/r5YSy94GV_4
void ADungeonRoom_CppCharacter::LineTrace()
{
	//Ignore the player.
	FCollisionQueryParams myCollisionParams;
	myCollisionParams.AddIgnoredComponent(GetCapsuleComponent());

	//Setup for Linetrace
	float traceDistance = 500.0f;
	FColor traceColor = FColor::Red;
	FVector startVector = GetCapsuleComponent()->GetComponentLocation();
	FVector endVector = startVector + (FollowCamera->GetForwardVector() * traceDistance);

	//Actual Linetrace
	GetWorld()->LineTraceSingleByChannel(hit, startVector, endVector, ECC_Pawn, myCollisionParams);

	//Get a bool/result to use (true if the object has the Pickup-interface.
	II_Pickupable* implementsPickup = Cast<II_Pickupable>(hit.GetActor());

	//If hitting, change position of endVector
	if (hit.bBlockingHit && implementsPickup)
	{
		UE_LOG(LogTemp, Warning, TEXT("Yah, we hit da maaaan!"));

		traceColor = FColor::Blue;
		endVector = hit.Location;

		PickupObject();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not hit maaaan."));
	}

	//Visual representation of Linetrace
	DrawDebugLine(GetWorld(), hit.TraceStart, endVector, traceColor, false, 10.0f, 0, 10.0f);
}

void ADungeonRoom_CppCharacter::PickupObject_Implementation()
{
	hit.GetComponent()->SetSimulatePhysics(false);
	hit.GetComponent()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	hit.GetActor()->AttachToComponent(holdingComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	isHoldingObject = true;
}

void ADungeonRoom_CppCharacter::StopUsing()
{
	if (isHoldingObject)
	{
		DropObject();
	}
}


void ADungeonRoom_CppCharacter::DropObject_Implementation()
{
	if (hit.GetActor())
	{
		hit.GetActor()->DetachRootComponentFromParent();
		hit.GetComponent()->SetSimulatePhysics(true);
		hit.GetComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	isHoldingObject = false;
}

void ADungeonRoom_CppCharacter::Throw()
{
	if (!hit.GetActor() || !isHoldingObject) 
		return;

	DropObject();

	float throwMultiplication = 900.0f;
	FVector additionalUpwardImpulse = FVector(0.0f, 0.0f, 400.0f);
	FVector impulseDirection = FollowCamera->GetForwardVector() * throwMultiplication + additionalUpwardImpulse;

	hit.GetComponent()->AddImpulse(impulseDirection, NAME_None, true);

	ThrowAudio();
}


void ADungeonRoom_CppCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ADungeonRoom_CppCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ADungeonRoom_CppCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ADungeonRoom_CppCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ADungeonRoom_CppCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ADungeonRoom_CppCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ADungeonRoom_CppCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
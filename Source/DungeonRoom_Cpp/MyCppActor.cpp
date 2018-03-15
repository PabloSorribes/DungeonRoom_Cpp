// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCppActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"


// Sets default values
AMyCppActor::AMyCppActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	box = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));
	RootComponent = box;

	trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	trigger->SetupAttachment(box);
	trigger->bGenerateOverlapEvents = true;
	trigger->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	trigger->OnComponentBeginOverlap.AddDynamic(this, &AMyCppActor::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AMyCppActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Fullname is %s"), *GetFullName());


	FString name = "";
	FullName_Print(name);
	UE_LOG(LogTemp, Warning, TEXT("Fullname is %s"), *name);

}

// Called every frame
void AMyCppActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FString AMyCppActor::GetFullName()
{
	return firstName + " " + lastName;
}

void AMyCppActor::FullName_Print(FString & name)
{
	name = firstName + " " + lastName;
}

void AMyCppActor::SetFullName(FString p_firstName, FString p_lastName)
{
	firstName = p_firstName;
	lastName = p_lastName;
}

void AMyCppActor::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Full name is: %s. Other actors name is: %s"), *GetFullName(), *OtherActor->GetName());

	FString name = "";
	FullName_Print(name);
	UE_LOG(LogTemp, Warning, TEXT("Fullname is %s"), *name);
}



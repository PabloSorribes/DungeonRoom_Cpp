// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCppActor.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class DUNGEONROOM_CPP_API AMyCppActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCppActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* box = nullptr;

	UPROPERTY(EditAnywhere)
		UBoxComponent* trigger = nullptr;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 age = 34;

	UPROPERTY(EditAnywhere)
	FString firstName = "Pablo";

	UPROPERTY(EditAnywhere)
	FString lastName = "Sorribes";
	
	float myFloat = 0.f;

	FVector myVector = FVector(0.f, 0.f, 0.f);

	UFUNCTION(BlueprintPure, Category = "0_OwnFunctions|name")
	FString GetFullName();

	UFUNCTION(BlueprintCallable, Category = "0_OwnFunctions|name|last")
	void FullName_Print(FString & name);

	UFUNCTION(BlueprintCallable, Category = "0_OwnFunctions|name")
	void SetFullName(FString p_firstName, FString p_lastName);
	
	UFUNCTION(BlueprintCallable, Category = "0_OwnFunctions")
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

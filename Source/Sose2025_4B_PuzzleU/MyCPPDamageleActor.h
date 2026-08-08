// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCPPDamageleActor.generated.h"

UCLASS()
class SOSE2025_4B_PUZZLEU_API AMyCPPDamageleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCPPDamageleActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float MaxHelth = 200;

	UPROPERTY();
	float CurrentHealth = 40;

// -------------------------------------------------------------------//

	// Returns value between 0..1
	UFUNCTION(BlueprintPure) // kann kein void haben weil er dann einen leehren node ist 
	float GetHealthPercentage ();

	UFUNCTION(BlueprintCallable)
	void TakeDamage (float DamageAmount);

	UFUNCTION(BlueprintPure)
	bool IsDead();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
 
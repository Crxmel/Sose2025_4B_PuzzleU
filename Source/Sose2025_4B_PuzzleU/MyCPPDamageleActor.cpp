// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCPPDamageleActor.h"

// Sets default values
AMyCPPDamageleActor::AMyCPPDamageleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyCPPDamageleActor::TakeDamage(float DamageAmount)
{
	CurrentHealth = CurrentHealth - DamageAmount;

	//if (CurrentHealth <= 0)//
	if (IsDead())											// wieso keine lösung in () ?
	{
		OnDeath(); // macht nen event im BP
	}
}

bool AMyCPPDamageleActor::IsDead()
{
	//if (CurrentHealth <= 0)
	if (GetHealthPercentage() <= 0)
		return true;

	return false;
}

float AMyCPPDamageleActor::GetHealthPercentage()
{
	return CurrentHealth / MaxHelth;
}







// Called when the game starts or when spawned
void AMyCPPDamageleActor::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentHealth = MaxHelth;
}

// Called every frame
void AMyCPPDamageleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


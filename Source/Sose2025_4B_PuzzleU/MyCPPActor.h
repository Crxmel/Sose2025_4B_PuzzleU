// Fill out your copyright notice in the Description page of Project Settings.
// .h = hadderfile
#pragma once
// um alles anderre auszublenden
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "MyCPPActor.generated.h"

UCLASS() // macro (dick geschrieben)
class SOSE2025_4B_PUZZLEU_API AMyCPPActor : public AActor // wie heißt die klasse und von wen erbt sie 
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AMyCPPActor(); // construckter

	//UPROPERTY(VisibleAnywhere) // heiht kann man überall sehen 
	//	int MyInt = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // heist kann man überall änern BlueprintReadWrite= auch im BP
		int MyInt = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool MyBool = false;

	UPROPERTY(EditAnywhere) //1 um infos drunter aus zu machen
		bool Condition = false;


	UPROPERTY(EditAnywhere, meta = (EditCondition = "Condition")) // info drunter
		FString Massage = "hello";

	


public:

	UFUNCTION()
	void MyFunktion();

	UFUNCTION(BlueprintCallable) // wichtig
	void BlueprintCallable();

	UFUNCTION(BlueprintPure)
	 float BlueprintPure();
	
	UFUNCTION(BlueprintImplementableEvent) //wichtig
	void BlueprintImplementableEvent();  // darf icht extra im cpp erstellt werden

	//UFUNCTION(BlueprintNativeEvent)
	//void BlueprintNativeEvent

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;




	//Nicht fertig soll nen box collider im BP_(denActor) machen
public:
	UPROPERTY(VisibleAnywhere) //Bedeutet ich kann box component sehen
UBoxComponent* MyBoxComponent; //braucht oben son Include dings um nen box component zu finden
};


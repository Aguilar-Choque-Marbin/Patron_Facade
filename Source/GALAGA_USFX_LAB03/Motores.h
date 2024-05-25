// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Motores.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API AMotores : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMotores();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MotorNave")
	UStaticMeshComponent* MallaMotorNave;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB03_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
public: 
	ANaveEnemigaCaza();

	float PosicionInicialX;

public: 
	virtual void Mover(float DeltaTime);
	//virtual void Disparar();

public:
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

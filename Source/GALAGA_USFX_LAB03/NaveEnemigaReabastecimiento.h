// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB03_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	ANaveEnemigaReabastecimiento();

	float PosicionInicialX;

protected: 
	virtual void Mover(float DeltaTime);

public: 
	virtual void Tick(float DeltaTime) override;
};

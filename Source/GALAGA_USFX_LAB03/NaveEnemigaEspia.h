// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB03_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	ANaveEnemigaEspia();

	float PosicionInicialX;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
};

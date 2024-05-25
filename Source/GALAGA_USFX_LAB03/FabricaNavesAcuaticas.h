// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaNaves.h"
#include "FabricaNavesAcuaticas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB03_API AFabricaNavesAcuaticas : public AFabricaNaves
{
	GENERATED_BODY()
public:
	virtual ANaveEnemiga* CreacionNaves(FString tipoNave) override;
};

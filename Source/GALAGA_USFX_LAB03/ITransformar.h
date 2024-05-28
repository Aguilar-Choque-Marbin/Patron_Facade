// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ITransformar.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UITransformar : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_LAB03_API IITransformar
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void TransformarSubscriptor() = 0;
	virtual void ActivarArmamento() = 0;
	virtual void MejoraArmamento(float DeltaTime) = 0;
	virtual void ActivarSuperVelocidad() = 0;
	virtual void MejorarSuperVelocidad() = 0;
	virtual void ActivarEscudo() = 0;
	virtual void MejorarImplementarEscudo() = 0;
};

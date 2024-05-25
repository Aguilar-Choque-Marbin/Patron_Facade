// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "INaveNodriza.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UINaveNodriza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_LAB03_API IINaveNodriza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void NodrizaSpawn(int a) = 0;
	virtual void NodrizaMotor(int b) = 0;
	virtual void NodrizaProyectil(int c) = 0;
	virtual void NodrizaArma(int d) = 0;
};

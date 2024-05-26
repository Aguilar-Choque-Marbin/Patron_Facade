// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGA_USFX_LAB03GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaEspia;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaTransporte;

UCLASS(MinimalAPI)
class AGALAGA_USFX_LAB03GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFX_LAB03GameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	ANaveEnemigaCaza* NaveEnemigaCaza;
	ANaveEnemigaEspia* NaveEnemigaEspia;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento;
	ANaveEnemigaTransporte* NaveEnemigaTransporte;

//public:
//	TArray<ANaveEnemiga*> TANavesEnemigas;
//	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
//	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;

private:
	int TiempoTranscurrido;

public: 
	//class ADirectorNaveNodriza* DirectorNodriza;

	//class ABuildNaveNodrizaConcreto* NaveNodrizaConcreto;
	//class ABuildNaveNodrizaBasica* NaveNodrizaBasica;

	class AFNiveles* Niveles;
};




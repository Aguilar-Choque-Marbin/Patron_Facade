// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FNiveles.h"
#include "GALAGA_USFX_LAB03GameMode.generated.h"

//class ANaveEnemiga;
//class ANaveEnemigaCaza;
//class ANaveEnemigaEspia;
//class ANaveEnemigaReabastecimiento;
//class ANaveEnemigaTransporte;

class ASubscriptor1;
class ASubscriptor2;

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

//public:
	//ANaveEnemigaCaza* NaveEnemigaCaza;
	//ANaveEnemigaEspia* NaveEnemigaEspia;
	//ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento;
	//ANaveEnemigaTransporte* NaveEnemigaTransporte;

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

	//AFNiveles* Nivel;

protected:
	class AReloj* Reloj;
	class ASubscriptor1* NaveSubscriptor1;
	class ASubscriptor2* NaveSubscriptor2;

public:
	TArray<ASubscriptor1*> NavesSub1;
	TArray<ASubscriptor2*> NavesSub2;

	float TimeDay;

	FVector PosicionNaveSub1;
	FVector PosicionNaveSub2;

};




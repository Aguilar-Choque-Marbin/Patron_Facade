// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_LAB03GameMode.h"
#include "GALAGA_USFX_LAB03Pawn.h"

#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"

#include "FabricaNaves.h"
#include "FabricaNavesAereas.h"
#include "FabricaNavesTerrestres.h"

#include "BuildNaveNodrizaBasica.h"
#include "BuildNaveNodrizaConcreto.h"
#include "DirectorNaveNodriza.h"
#include "NaveNodriza.h"

#include "FNiveles.h"

AGALAGA_USFX_LAB03GameMode::AGALAGA_USFX_LAB03GameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_LAB03Pawn::StaticClass();
}

void AGALAGA_USFX_LAB03GameMode::BeginPlay()
{
	Super::BeginPlay();

	Nivel = GetWorld()->SpawnActor<AFNiveles>(AFNiveles::StaticClass());
	Nivel->GenerarFabricas();
	Nivel->CrearEscuadronAereas();
	Nivel->CrearEscuadronTerrestres();
	Nivel->CrearEscuadronAcuaticas();
	Nivel->CrearNodrizaBasica();
	Nivel->CrearNodrizaConcreto();
}
/*void AGALAGA_USFX_LAB03GameMode::BeginPlay()
{
	Super::BeginPlay();

	DirectorNodriza = GetWorld()->SpawnActor<ADirectorNaveNodriza>(ADirectorNaveNodriza::StaticClass());

	NaveNodrizaConcreto = GetWorld()->SpawnActor<ABuildNaveNodrizaConcreto>(ABuildNaveNodrizaConcreto::StaticClass());
	NaveNodrizaBasica = GetWorld()->SpawnActor<ABuildNaveNodrizaBasica>(ABuildNaveNodrizaBasica::StaticClass());

	DirectorNodriza->OrdenarConstruccionNaveNodriza(NaveNodrizaConcreto);
	DirectorNodriza->CrearNaveNodriza();
	DirectorNodriza->OrdenarConstruccionNaveNodriza(NaveNodrizaBasica);
	DirectorNodriza->CrearNaveNodriza2();


	AFabricaNaves* NaveAereas= GetWorld()->SpawnActor<AFabricaNavesAereas>(AFabricaNavesAereas::StaticClass());
	AFabricaNaves* NaveTerrestre = GetWorld()->SpawnActor<AFabricaNavesTerrestres>(AFabricaNavesTerrestres::StaticClass());

	FVector ubicacionInicioNaveEnemigaCaza = FVector(-700.0f, 500.0f, 250.0f);
	FVector ubicacionInicioNaveEnemigaEspia = FVector(-550.0f, 500.0f, 250.0f);
	FVector ubicacionInicioNaveEnemigaReabastecimiento = FVector(-400.0f, 500.0f, 250.0f);
	FVector ubicacionInicioNaveEnemigaTransporte = FVector(-250.0f, 500.0f, 250.0f);


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World!= nullptr)
	{
		for (int i = 0; i < 3; i++)
		{
			FVector PosicionNavesActual = FVector(ubicacionInicioNaveEnemigaCaza.X, ubicacionInicioNaveEnemigaCaza.Y + i * 300, ubicacionInicioNaveEnemigaCaza.Z);
			ANaveEnemiga* NaveEnemiga1 = NaveAereas->CreacionNaves(1);
			//ANaveEnemiga* NaveEnemiga1_2 = NaveAereas->CreacionNaves(2);
			//ANaveEnemiga* NaveEnemiga1_3 = NaveAereas->CreacionNaves(3);
			NaveEnemiga1->SetActorLocation(PosicionNavesActual);

			//TANavesEnemigas.Push(NaveEnemigaCaza);
		}
		for (int j = 0; j < 3; j++)
		{
			FVector PosicionNaveActual = FVector(ubicacionInicioNaveEnemigaEspia.X, ubicacionInicioNaveEnemigaEspia.Y + j * 300, ubicacionInicioNaveEnemigaEspia.Z);
			ANaveEnemiga* NaveEnemiga2 = NaveTerrestre->CreacionNaves(1);
			//ANaveEnemiga* NaveEnemiga2_1 = NaveTerrestre->CreacionNaves(2);
			NaveEnemiga2->SetActorLocation(PosicionNaveActual);

			//TANavesEnemigas.Push(NaveEnemigaEspia);
		}
		//for (int k = 0; k < 3; k++)
		//{
		//	FVector PosicionNaveActual = FVector(ubicacionInicioNaveEnemigaReabastecimiento.X, ubicacionInicioNaveEnemigaReabastecimiento.Y + k * 300, ubicacionInicioNaveEnemigaReabastecimiento.Z);
		//	NaveEnemigaReabastecimiento = World->SpawnActor<ANaveEnemigaReabastecimiento>(PosicionNaveActual, rotacionNave);

		//	//TANavesEnemigas.Push(NaveEnemigaReabastecimiento);
		//}
		//for (int l = 0; l < 3; l++)
		//{
		//	FVector PosicionNaveActual = FVector(ubicacionInicioNaveEnemigaTransporte.X, ubicacionInicioNaveEnemigaTransporte.Y + l * 300, ubicacionInicioNaveEnemigaTransporte.Z);
		//	NaveEnemigaTransporte = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);

		//	//TANavesEnemigas.Push(NaveEnemigaTransporte);
		//}
		//TiempoTranscurrido = 0;
	}
}*/

void AGALAGA_USFX_LAB03GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//TiempoTranscurrido++;

	//if (TiempoTranscurrido >= 100)
	//{
	//	int numeroEnemigo = FMath::RandRange(0,9);
	//	if (GEngine)
	//	{
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));

	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));
	//	}

	//	TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	//}
}


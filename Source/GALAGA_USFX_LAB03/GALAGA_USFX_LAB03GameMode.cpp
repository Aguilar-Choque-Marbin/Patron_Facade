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
#include "FabricaNavesAcuaticas.h"

#include "BuildNaveNodrizaBasica.h"
#include "BuildNaveNodrizaConcreto.h"
#include "DirectorNaveNodriza.h"
#include "NaveNodriza.h"

#include "Reloj.h"
#include "Subscriptor1.h"
#include "Subscriptor2.h"



AGALAGA_USFX_LAB03GameMode::AGALAGA_USFX_LAB03GameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_LAB03Pawn::StaticClass();

	PosicionNaveSub1 = FVector(-700.0f, 200.0f, 200.0f);
	PosicionNaveSub2 = FVector(-700.0f, 800.0f, 200.0f);

	TimeDay = 0.0f;
	V = 0;
	State = 1.0f;
	Estado = 0;
}


void AGALAGA_USFX_LAB03GameMode::BeginPlay()
{
	Super::BeginPlay();

	//PRUEBA PARA NAVES ENEMIGAS
	// 
	// 
	//FVector ubicacionInicioNaveEnemigaCaza = FVector(0.0f, 500.0f, 250.0f);
	//FVector ubicacionInicioNaveEnemigaEspia = FVector(-550.0f, 500.0f, 250.0f);

	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	//UWorld* const World = GetWorld();
	//if (World != nullptr)
	//{
	//	ANaveEnemigaCaza* NaveEnemigaCaza1 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionInicioNaveEnemigaCaza, rotacionNave);
	//	ANaveEnemigaEspia* NaveEnemigaEspia1 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionInicioNaveEnemigaEspia, rotacionNave);
	//}




	//BUILDER NODRIZA
	// 
	//DirectorNodriza = GetWorld()->SpawnActor<ADirectorNaveNodriza>(ADirectorNaveNodriza::StaticClass());

	//NaveNodrizaConcreto = GetWorld()->SpawnActor<ABuildNaveNodrizaConcreto>(ABuildNaveNodrizaConcreto::StaticClass());
	//NaveNodrizaBasica = GetWorld()->SpawnActor<ABuildNaveNodrizaBasica>(ABuildNaveNodrizaBasica::StaticClass());

	//DirectorNodriza->OrdenarConstruccionNaveNodriza(NaveNodrizaConcreto);
	//DirectorNodriza->CrearNaveNodriza();
	//DirectorNodriza->OrdenarConstruccionNaveNodriza(NaveNodrizaBasica);
	//DirectorNodriza->CrearNaveNodriza2();




	//FACTORY METHOD
	// 
	//AFabricaNaves* NaveAereas= GetWorld()->SpawnActor<AFabricaNavesAereas>(AFabricaNavesAereas::StaticClass());
	//AFabricaNaves* NaveTerrestre = GetWorld()->SpawnActor<AFabricaNavesTerrestres>(AFabricaNavesTerrestres::StaticClass());
	//AFabricaNaves* NaveAcuatica = GetWorld()->SpawnActor<AFabricaNavesAcuaticas>(AFabricaNavesAcuaticas::StaticClass());

	//FVector ubicacionInicioNaveEnemigaCaza = FVector(-700.0f, 500.0f, 250.0f);
	//FVector ubicacionInicioNaveEnemigaEspia = FVector(-550.0f, 500.0f, 250.0f);
	//FVector ubicacionInicioNaveEnemigaReabastecimiento = FVector(-400.0f, 500.0f, 250.0f);
	//FVector ubicacionInicioNaveEnemigaTransporte = FVector(-250.0f, 500.0f, 250.0f);


	//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	//UWorld* const World = GetWorld();
	//if (World!= nullptr)
	//{
	//	for (int i = 0; i < 3; i++)
	//	{
	//		FVector PosicionNavesActual = FVector(ubicacionInicioNaveEnemigaCaza.X, ubicacionInicioNaveEnemigaCaza.Y + i * 300, ubicacionInicioNaveEnemigaCaza.Z);
	//		ANaveEnemiga* NaveEnemiga1 = NaveAereas->CreacionNave("Caza");
	//		NaveEnemiga1->SetActorLocation(PosicionNavesActual);

	//		//TANavesEnemigas.Push(NaveEnemigaCaza);
	//	}
	//	for (int j = 0; j < 3; j++)
	//	{
	//		FVector PosicionNaveActual = FVector(ubicacionInicioNaveEnemigaReabastecimiento.X, ubicacionInicioNaveEnemigaReabastecimiento.Y + j * 300, ubicacionInicioNaveEnemigaReabastecimiento.Z);
	//		ANaveEnemiga* NaveEnemiga2 = NaveTerrestre->CreacionNave("Reabastecimiento");
	//		NaveEnemiga2->SetActorLocation(PosicionNaveActual);

	//		//TANavesEnemigas.Push(NaveEnemigaEspia);
	//	}
	//	for (int k = 0; k < 3; k++)
	//	{
	//		FVector PosicionNaveActual = FVector(ubicacionInicioNaveEnemigaTransporte.X, ubicacionInicioNaveEnemigaTransporte.Y + k * 300, ubicacionInicioNaveEnemigaTransporte.Z);
	//		ANaveEnemiga* NaveEnemiga2 = NaveAcuatica->CreacionNave("Transporte");
	//		NaveEnemiga2->SetActorLocation(PosicionNaveActual);

	//		//TANavesEnemigas.Push(NaveEnemigaReabastecimiento);
	//	}
	//}



	//FACADE

	//Nivel = GetWorld()->SpawnActor<AFNiveles>(AFNiveles::StaticClass());
	//Nivel->CrearNivel("Basico");
	//Nivel->CrearNivel("Intermedio");
	//Nivel->CrearNivel("Nodriza");
	//Nivel->GenerarFabricas();
	//Nivel->CrearEscuadronAereas();
	//Nivel->CrearEscuadronTerrestres();
	//Nivel->CrearEscuadronAcuaticas();
	//Nivel->CrearNodrizaBasica();
	//Nivel->CrearNodrizaConcreto();



	//Observer
	Reloj=GetWorld()->SpawnActor<AReloj>(AReloj::StaticClass());

	for (int i = 0; i < 2; i++)
	{
		NaveSubscriptor1 = GetWorld()->SpawnActor<ASubscriptor1>(ASubscriptor1::StaticClass());
		NavesSub1.Add(NaveSubscriptor1);

		NaveSubscriptor1->EstablecerReloj(Reloj);
		NaveSubscriptor1->SetActorLocation(PosicionNaveSub1);

		PosicionNaveSub1.X = PosicionNaveSub1.X + 200.0f;
		PosicionNaveSub1.Y = PosicionNaveSub1.Y - 200.0f;
	}
	
	for (int i = 0; i < 2; i++)
	{
		NaveSubscriptor2 = GetWorld()->SpawnActor<ASubscriptor2>(ASubscriptor2::StaticClass());
		NavesSub2.Add(NaveSubscriptor2);

		NaveSubscriptor2->EstablecerReloj(Reloj);
		NaveSubscriptor2->SetActorLocation(PosicionNaveSub2);

		PosicionNaveSub2.X = PosicionNaveSub2.X + 200.0f;
		PosicionNaveSub2.Y = PosicionNaveSub2.Y + 200.0f;
	}

}

void AGALAGA_USFX_LAB03GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Observer
	TimeDay += DeltaTime;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(
	TEXT("Hora del dia: %f"), TimeDay));

	if (TimeDay >= 12.0f) {
		Reloj->SetHora("12:00");
		for (ASubscriptor1* Subs1 : NavesSub1)
		{
			Subs1->DestruirSubscripcion();
		}
	}
	if (TimeDay >= 18.0f) {
		Reloj->SetHora("18:00");

	}
	if (TimeDay >= 22.0f) {
		Reloj->SetHora("22:00");

	}
	if (TimeDay >= 24.0f) {
		//NaveSubscriptor1->DestruirSubscripcion();
		//NaveSubscriptor2->DestruirSubscripcion();
		TimeDay = 0.0f;
	}
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "FNiveles.h"

#include "FabricaNavesAcuaticas.h"
#include "FabricaNavesAereas.h"
#include "FabricaNavesTerrestres.h"




// Sets default values
AFNiveles::AFNiveles()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PosEscuadronTerrestres = FVector(0.0f, -500.0f, 250.0f);
	PosEscuadronAereas = FVector(300.0f, -500.0f, 250.0f);
	PosEscuadronAcuaticas = FVector(600.0f, -500.0f, 250.0f);
	
}

// Called when the game starts or when spawned
void AFNiveles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFNiveles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFNiveles::EstablecerFabricas()
{
	FabricaAereas = GetWorld()->SpawnActor<AFabricaNavesAereas>(AFabricaNavesAereas::StaticClass());
	FabricaTerrestres = GetWorld()->SpawnActor<AFabricaNavesTerrestres>(AFabricaNavesTerrestres::StaticClass());
	FabricaAcuaticas = GetWorld()->SpawnActor<AFabricaNavesAcuaticas>(AFabricaNavesAcuaticas::StaticClass());

	if (FabricaAereas && FabricaTerrestres && FabricaAcuaticas)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Fabrica Implementadas"));
	}
}

void AFNiveles::CrearEscuadronAereas()
{
	for (int i = 0; i < 10; i++)
	{
		ANaveEnemiga* NaveCaza = FabricaAereas->GenerarNave("Caza");
		NaveCaza->SetActorLocation(PosEscuadronAereas);
		PosEscuadronAereas.Y += 200.0f;
		if (i == 4)
		{
			PosEscuadronAereas.X += 150.0f;
			PosEscuadronAereas.Y = -500.0f;
		}
		TANavesEnemigas.Push(NaveCaza);
	}
}

void AFNiveles::CrearEscuadronTerrestres()
{
	for (int i = 0; i < 10; i++)
	{
		ANaveEnemiga* NaveReabastecimiento = FabricaTerrestres->GenerarNave("Reabastecimiento");
		NaveReabastecimiento->SetActorLocation(PosEscuadronTerrestres);
		PosEscuadronTerrestres.Y += 200.0f;
		if (i == 4)
		{
			PosEscuadronTerrestres.X += 150.0f;
			PosEscuadronTerrestres.Y = -500.0f;
		}
		TANavesEnemigas.Push(NaveReabastecimiento);
	}
}

void AFNiveles::CrearEscuadronAcuaticas()
{
	for (int i = 0; i < 10; i++)
	{
		ANaveEnemiga* NaveTransporte = FabricaAcuaticas->GenerarNave("Transporte");
		NaveTransporte->SetActorLocation(PosEscuadronAcuaticas);
		PosEscuadronAcuaticas.Y += 200.0f;
		if (i == 4)
		{
			PosEscuadronAcuaticas.X += 150.0f;
			PosEscuadronAcuaticas.Y = -500.0f;
		}
		TANavesEnemigas.Push(NaveTransporte);
	}
}

//void AFNiveles::CrearNodriza()
//{
//}
//
//void AFNiveles::CrearObstaculos()
//{
//}
//
//void AFNiveles::CrearNaveEnemigas()
//{
//}
//
//void AFNiveles::MovimientoNaves()
//{
//}


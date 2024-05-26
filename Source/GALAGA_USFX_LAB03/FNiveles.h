// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaNaves.h"

#include "DirectorNaveNodriza.h"
#include "BuildNaveNodrizaBasica.h"
#include "BuildNaveNodrizaConcreto.h"

#include "FNiveles.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API AFNiveles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFNiveles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//void CrearNodriza();
	//void CrearObstaculos();
	//void CrearNaveEnemigas();
	//void MovimientoNaves();

	AFabricaNaves* FabricaAereas;
	AFabricaNaves* FabricaTerrestres;
	AFabricaNaves* FabricaAcuaticas;

	ADirectorNaveNodriza* DirectorNodriza;
	ABuildNaveNodrizaBasica* NaveNodrizaBasica;
	ABuildNaveNodrizaConcreto* NaveNodrizaConcreto;

	TArray<ANaveEnemiga*> TANavesEnemigas;

	FVector PosEscuadronAereas;
	FVector PosEscuadronTerrestres;
	FVector PosEscuadronAcuaticas;

	void GenerarFabricas();
	void CrearEscuadronAereas();
	void CrearEscuadronTerrestres();
	void CrearEscuadronAcuaticas();
	void CrearNodrizaBasica();
	void CrearNodrizaConcreto();

};

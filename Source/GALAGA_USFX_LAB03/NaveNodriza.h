// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "INaveNodriza.h"
#include "GALAGA_USFX_LAB03Projectile.h"

#include "GameFramework/Actor.h"
#include "NaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API ANaveNodriza : public AActor , public IINaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	class AMotores* NaveMotor;
	class AArmaNave* NaveArma;
	class ANaveSpawn* NaveSpawn;
	class AGALAGA_USFX_LAB03Projectile* NaveProyectil;

public:
	void NodrizaSpawn(int a) override;
	void NodrizaMotor(int b) override;
	void NodrizaProyectil(int c) override;
	void NodrizaArma(int d) override;

	float TiempoDeDisparo;
	float Intervalo;
	int Dis;
};

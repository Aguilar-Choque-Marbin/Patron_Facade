// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "NaveSpawn.h"
#include "GALAGA_USFX_LAB03Projectile.h"
#include "Motores.h"
#include "ArmaNave.h"
#include "MovimientoNaves.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TiempoDeDisparo = 0.0f;
	Intervalo = 1.0f;
}

// Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveNodriza::NodrizaSpawn(int a)
{
	if (a == 1)
	{
		FVector PosicionNave = FVector(-71.0f, 8.0f, 400.0f);
		FRotator RotacionNave = FRotator(0.0f, 0.0f, 0.0f);
		NaveSpawn = GetWorld()->SpawnActor<ANaveSpawn>(ANaveSpawn::StaticClass());
		NaveSpawn->SetActorLocation(PosicionNave);
		NaveSpawn->SetActorRotation(RotacionNave);
	}
	if (a == 2)
	{
		FVector PosicionNave1 = FVector(-471.0f, 8.0f, 400.0f);
		FRotator RotacionNave1 = FRotator(0.0f, 0.0f, 0.0f);
		NaveSpawn = GetWorld()->SpawnActor<ANaveSpawn>(ANaveSpawn::StaticClass());
		NaveSpawn->SetActorLocation(PosicionNave1);
		NaveSpawn->SetActorRotation(RotacionNave1);
	}
}

void ANaveNodriza::NodrizaMotor(int b)
{
	if (b == 1)
	{
		FVector PosicionMotor = FVector(-77.0f, 0.0f, 350.0f);
		FRotator RotacionMotor = FRotator(0.0f, 0.0f, 0.0f);
		NaveMotor = GetWorld()->SpawnActor<AMotores>(AMotores::StaticClass());
		NaveMotor->SetActorLocation(PosicionMotor);
		NaveMotor->SetActorRotation(RotacionMotor);
	}
	if (b == 2)
	{
		FVector PosicionMotor1 = FVector(-477.0f, 0.0f, 350.0f);
		FRotator RotacionMotor1 = FRotator(0.0f, 0.0f, 0.0f);
		NaveMotor = GetWorld()->SpawnActor<AMotores>(AMotores::StaticClass());
		NaveMotor->SetActorLocation(PosicionMotor1);
		NaveMotor->SetActorRotation(RotacionMotor1);
	}
}

void ANaveNodriza::NodrizaProyectil(int c)
{
	Dis = c;
	if (c == 1)
	{
		FVector PosicionActualNaveNodriza = NaveArma->GetActorLocation();
		FRotator RotacionActualNaveNodriza = NaveArma->GetActorRotation();

		FVector DireccionDisparo = RotacionActualNaveNodriza.Vector();
		PosicionActualNaveNodriza += DireccionDisparo * 50;
		NaveProyectil = GetWorld()->SpawnActor<AGALAGA_USFX_LAB03Projectile>(AGALAGA_USFX_LAB03Projectile::StaticClass());
		NaveProyectil->SetActorLocation(PosicionActualNaveNodriza);
	}
	if (c == 2)
	{
		FVector PosicionActualNaveNodriza1 = NaveArma->GetActorLocation();
		FRotator RotacionActualNaveNodriza1 = NaveArma->GetActorRotation();

		FVector DireccionDisparo = RotacionActualNaveNodriza1.Vector();
		PosicionActualNaveNodriza1 += DireccionDisparo * 100;
		NaveProyectil = GetWorld()->SpawnActor<AGALAGA_USFX_LAB03Projectile>(AGALAGA_USFX_LAB03Projectile::StaticClass());
		NaveProyectil->SetActorLocation(PosicionActualNaveNodriza1);
	}
}

void ANaveNodriza::NodrizaArma(int d)
{
	if (d == 1)
	{
		FVector PosicionArma = FVector(-105.0f, 0.0f, 500.0f);
		FRotator RotacionArma = FRotator(0.0f, 0.0f, 0.0f);
		NaveArma = GetWorld()->SpawnActor<AArmaNave>(AArmaNave::StaticClass());
		NaveArma->SetActorLocation(PosicionArma);
		NaveArma->SetActorRotation(RotacionArma);
	}
	if (d == 2)
	{
		FVector PosicionArma1 = FVector(-405.0f, 0.0f, 500.0f);
		FRotator RotacionArma1 = FRotator(0.0f, 0.0f, 0.0f);
		NaveArma = GetWorld()->SpawnActor<AArmaNave>(AArmaNave::StaticClass());
		NaveArma->SetActorLocation(PosicionArma1);
		NaveArma->SetActorRotation(RotacionArma1);
	}
}


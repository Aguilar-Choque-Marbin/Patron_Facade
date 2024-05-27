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

//void ANaveNodriza::NodrizaSpawn(int a)
//{
//	//if (a == 1)
//	//{
//	//	FVector PosicionNave = FVector(-71.0f, 8.0f, 400.0f);
//	//	FRotator RotacionNave = FRotator(0.0f, 0.0f, 0.0f);
//	//	Spawn = GetWorld()->SpawnActor<ANaveSpawn>(ANaveSpawn::StaticClass());
//	//	Spawn->SetActorLocation(PosicionNave);
//	//	Spawn->SetActorRotation(RotacionNave);
//	//}
//	//if (a == 2)
//	//{
//	//	FVector PosicionNave1 = FVector(-471.0f, 8.0f, 400.0f);
//	//	FRotator RotacionNave1 = FRotator(0.0f, 0.0f, 0.0f);
//	//	Spawn = GetWorld()->SpawnActor<ANaveSpawn>(ANaveSpawn::StaticClass());
//	//	Spawn->SetActorLocation(PosicionNave1);
//	//	Spawn->SetActorRotation(RotacionNave1);
//	//}
//}

//void ANaveNodriza::NodrizaMotor(int b)
//{
//	//if (b == 1)
//	//{
//	//	FVector PosicionMotor = FVector(-77.0f, 0.0f, 350.0f);
//	//	FRotator RotacionMotor = FRotator(0.0f, 0.0f, 0.0f);
//	//	Motor = GetWorld()->SpawnActor<AMotores>(AMotores::StaticClass());
//	//	Motor->SetActorLocation(PosicionMotor);
//	//	Motor->SetActorRotation(RotacionMotor);
//	//}
//	//if (b == 2)
//	//{
//	//	FVector PosicionMotor1 = FVector(-477.0f, 0.0f, 350.0f);
//	//	FRotator RotacionMotor1 = FRotator(0.0f, 0.0f, 0.0f);
//	//	Motor = GetWorld()->SpawnActor<AMotores>(AMotores::StaticClass());
//	//	Motor->SetActorLocation(PosicionMotor1);
//	//	Motor->SetActorRotation(RotacionMotor1);
//	//}
//}

//void ANaveNodriza::NodrizaProyectil(int c)
//{
//	//Dis = c;
//	//if (c == 1)
//	//{
//	//	FVector PosicionActualNaveNodriza = Arma->GetActorLocation();
//	//	FRotator RotacionActualNaveNodriza = Arma->GetActorRotation();
//
//	//	FVector DireccionDisparo = RotacionActualNaveNodriza.Vector();
//	//	PosicionActualNaveNodriza += DireccionDisparo * 50;
//	//	Proyectil = GetWorld()->SpawnActor<AGALAGA_USFX_LAB03Projectile>(AGALAGA_USFX_LAB03Projectile::StaticClass());
//	//	Proyectil->SetActorLocation(PosicionActualNaveNodriza);
//	//}
//	//if (c == 2)
//	//{
//	//	FVector PosicionActualNaveNodriza1 = Arma->GetActorLocation();
//	//	FRotator RotacionActualNaveNodriza1 = Arma->GetActorRotation();
//
//	//	FVector DireccionDisparo = RotacionActualNaveNodriza1.Vector();
//	//	PosicionActualNaveNodriza1 += DireccionDisparo * 100;
//	//	Proyectil = GetWorld()->SpawnActor<AGALAGA_USFX_LAB03Projectile>(AGALAGA_USFX_LAB03Projectile::StaticClass());
//	//	Proyectil->SetActorLocation(PosicionActualNaveNodriza1);
//	//}
//}

//void ANaveNodriza::NodrizaArma(int d)
//{
//	//if (d == 1)
//	//{
//	//	FVector PosicionArma = FVector(-105.0f, 0.0f, 500.0f);
//	//	FRotator RotacionArma = FRotator(0.0f, 0.0f, 0.0f);
//	//	Arma = GetWorld()->SpawnActor<AArmaNave>(AArmaNave::StaticClass());
//	//	Arma->SetActorLocation(PosicionArma);
//	//	Arma->SetActorRotation(RotacionArma);
//	//}
//	//if (d == 2)
//	//{
//	//	FVector PosicionArma1 = FVector(-405.0f, 0.0f, 500.0f);
//	//	FRotator RotacionArma1 = FRotator(0.0f, 0.0f, 0.0f);
//	//	Arma = GetWorld()->SpawnActor<AArmaNave>(AArmaNave::StaticClass());
//	//	Arma->SetActorLocation(PosicionArma1);
//	//	Arma->SetActorRotation(RotacionArma1);
//	//}
//}


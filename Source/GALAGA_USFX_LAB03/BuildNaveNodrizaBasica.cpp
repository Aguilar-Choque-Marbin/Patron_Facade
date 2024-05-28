// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildNaveNodrizaBasica.h"

// Sets default values
ABuildNaveNodrizaBasica::ABuildNaveNodrizaBasica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuildNaveNodrizaBasica::BeginPlay()
{
	Super::BeginPlay();
	
	GenerarNave1 = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());
	GenerarNave1->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void ABuildNaveNodrizaBasica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuildNaveNodrizaBasica::ConstruirNuevaNave(int y)
{
	GenerarNave1->NodrizaSpawn(y);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Nave Nodriza1 Implementada"));
}

void ABuildNaveNodrizaBasica::ConstruirArmas(int u)
{
	GenerarNave1->NodrizaArma(u);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Armas Nodriza1 Implementada"));
}

void ABuildNaveNodrizaBasica::ConstruirMotores(int i)
{
	GenerarNave1->NodrizaMotor(i);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Motor Nodriza1 Implementada"));
}

void ABuildNaveNodrizaBasica::ConstruirProyectiles(int o)
{
	GenerarNave1->NodrizaProyectil(o);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Proyectiles Nodriza1 Implementada"));
}

ANaveNodriza* ABuildNaveNodrizaBasica::NaveNodriza()
{
	return GenerarNave1;
}


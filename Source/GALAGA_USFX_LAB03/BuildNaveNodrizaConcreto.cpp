// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildNaveNodrizaConcreto.h"

// Sets default values
ABuildNaveNodrizaConcreto::ABuildNaveNodrizaConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuildNaveNodrizaConcreto::BeginPlay()
{
	Super::BeginPlay();

	GenerarNave = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());
	GenerarNave->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void ABuildNaveNodrizaConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuildNaveNodrizaConcreto::ConstruirNuevaNave(int a)
{
	GenerarNave->NodrizaSpawn(a); // Llamamos a los metodos de la clase NaveNodriza
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Nave Nodriza Implementada")); // Mensaje en pantalla
}

void ABuildNaveNodrizaConcreto::ConstruirArmas(int b)
{
	GenerarNave->NodrizaArma(b); // Llamamos a los metodos de la clase NaveNodriza
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Arma Nodriza Implementada")); // Mensaje en pantalla
}

void ABuildNaveNodrizaConcreto::ConstruirMotores(int c)
{
	GenerarNave->NodrizaMotor(c); // Llamamos a los metodos de la clase NaveNodriza
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Motores Nodriza Implementada")); // Mensaje en pantalla
}

void ABuildNaveNodrizaConcreto::ConstruirProyectiles(int d)
{
	GenerarNave->NodrizaProyectil(d); // Llamamos a los metodos de la clase NaveNodriza
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Proyectiles Nodriza Implementada")); // Mensaje en pantalla
}

ANaveNodriza* ABuildNaveNodrizaConcreto::NaveNodriza()
{
	return GenerarNave;
}


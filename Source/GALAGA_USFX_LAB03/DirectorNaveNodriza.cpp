// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNaveNodriza.h"

// Sets default values
ADirectorNaveNodriza::ADirectorNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorNaveNodriza::OrdenarConstruccionNaveNodriza(AActor* Generador)
{
	GeneradorNaveNodriza = Cast<IIBuildNave>(Generador); //Aqui se realiza el casteo que se necesita para que funcione el metodo
}

void ADirectorNaveNodriza::CrearNaveNodriza()
{
	GeneradorNaveNodriza->ConstruirNuevaNave(1); //Llamamos a los metodos de la clase IBuildNave
	GeneradorNaveNodriza->ConstruirArmas(1); //Llamamos a los metodos de la clase IBuildNave
	GeneradorNaveNodriza->ConstruirMotores(1); //Llamamos a los metodos de la clase IBuildNave
	GeneradorNaveNodriza->ConstruirProyectiles(1); //Llamamos a los metodos de la clase IBuildNave
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Nave Nodriza1 Implementada")); //Mensaje en pantalla
}

void ADirectorNaveNodriza::CrearNaveNodriza2()
{
	GeneradorNaveNodriza->ConstruirNuevaNave(2); //Llamamos a los metodos de la clase IBuildNave
	GeneradorNaveNodriza->ConstruirMotores(2); //Llamamos a los metodos de la clase IBuildNave
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Nave Nodriza2 Implementada")); //Mensaje en pantalla
}

ANaveNodriza* ADirectorNaveNodriza::CreacionNaveNodriza()
{
	return GeneradorNaveNodriza->NaveNodriza();
}


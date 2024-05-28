// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoNodriza.h"

// Sets default values for this component's properties
UMovimientoNodriza::UMovimientoNodriza()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovimientoNodriza::BeginPlay()
{
	Super::BeginPlay();
	Velocidad = 100.0f;
	VelocidadRotacion = 50.0f;
	// ...
	
}


// Called every frame
void UMovimientoNodriza::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Mover = GetOwner();
	if (Mover)
	{
		float Radio = 300.0f; // Radio del c�rculo
		float Angulo = FMath::Fmod(DeltaTime * Velocidad, 2 * PI); // Angulo en radianes
		FVector PosicionActual = Mover->GetActorLocation();

		// Calcular la nueva posici�n en coordenadas polares
		float NuevaX = Radio * FMath::Cos(Angulo);
		float NuevaY = Radio * FMath::Sin(Angulo);
		FVector NuevaPosicion = FVector(NuevaX, NuevaY, PosicionActual.Z);

		// Establecer la nueva posici�n
		Mover->SetActorLocation(NuevaPosicion);

		// Agregar rotaci�n para que la nave apunte en la direcci�n del movimiento
		FRotator RotacionActual = Mover->GetActorRotation();
		FRotator NuevaRotacion = FRotator(0.0f, FMath::RadiansToDegrees(Angulo), 0.0f);
		Mover->SetActorRotation(NuevaRotacion);
	}
}


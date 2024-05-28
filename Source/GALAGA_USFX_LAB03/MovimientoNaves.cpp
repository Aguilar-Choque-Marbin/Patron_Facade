// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoNaves.h"

// Sets default values for this component's properties
UMovimientoNaves::UMovimientoNaves()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovimientoNaves::BeginPlay()
{
	Super::BeginPlay();
	Velocidad = 100.0f;
	VelocidadRotacion = 10.0f;
	// ...
	
}


// Called every frame
void UMovimientoNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Mover = GetOwner();
	if (Mover)
	{
		float LimiteMaximo = 300.0f;
		float LimiteMinimo = -300.0f;
		FVector PosicionActual = Mover->GetActorLocation();
		auto NuevaPosicion = PosicionActual + FVector(0.0f, DeltaTime * Velocidad, 0.0f);
		if (NuevaPosicion.Y >= LimiteMaximo)
		{
			Velocidad *= -1;
		}
		if (NuevaPosicion.Y <= LimiteMinimo)
		{
			Velocidad *= -1;
		}
		Mover->SetActorLocation(NuevaPosicion);
		// Agregar rotación
		FRotator RotacionActual = Mover->GetActorRotation();
		FRotator NuevaRotacion = RotacionActual + FRotator(0.0f, DeltaTime * VelocidadRotacion, 0.0f);
		Mover->SetActorRotation(NuevaRotacion);
	}
}




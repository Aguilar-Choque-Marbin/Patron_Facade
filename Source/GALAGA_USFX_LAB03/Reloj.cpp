// Fill out your copyright notice in the Description page of Project Settings.


#include "Reloj.h"

AReloj::AReloj()
{
    PrimaryActorTick.bCanEverTick = true;
	//Hora = "00:00";
}

void AReloj::BeginPlay()
{
	Super::BeginPlay();

}

void AReloj::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);
}

void AReloj::CambioHora()
{
	NotificadorSubscriptores();
}

void AReloj::SetHora(FString _Hora)
{
	Tiempo = _Hora;
	CambioHora();
}

FString AReloj::GetHora()
{
    return Tiempo;
}

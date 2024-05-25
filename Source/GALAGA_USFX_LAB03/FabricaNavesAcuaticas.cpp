// Fill out your copyright notice in the Description page of Project Settings.

#include "FabricaNavesAcuaticas.h"

#include "NaveEnemigaTransporte.h"


ANaveEnemiga* AFabricaNavesAcuaticas::CreacionNaves(FString tipoNave)
{
	if (tipoNave == "Transporte")
	{
		return GetWorld()->SpawnActor<ANaveEnemigaTransporte>(ANaveEnemigaTransporte::StaticClass());
	}
	return nullptr;
}

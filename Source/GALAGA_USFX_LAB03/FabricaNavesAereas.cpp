// Fill out your copyright notice in the Description page of Project Settings.

#include "FabricaNavesAereas.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"

ANaveEnemiga* AFabricaNavesAereas::CreacionNaves(FString tipoNave)
{
	if (tipoNave == "Caza")
	{
		return GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass());
	}
	if (tipoNave == "Espia")
	{
		return GetWorld()->SpawnActor<ANaveEnemigaEspia>(ANaveEnemigaEspia::StaticClass());
	}
	return nullptr;
}

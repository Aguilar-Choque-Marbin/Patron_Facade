// Fill out your copyright notice in the Description page of Project Settings.

#include "FabricaNavesTerrestres.h"

#include "NaveEnemigaReabastecimiento.h"




ANaveEnemiga* AFabricaNavesTerrestres::CreacionNaves(FString tipoNave)
{
	if (tipoNave.Equals("Reabastecimiento"))
	{
		return GetWorld()->SpawnActor<ANaveEnemigaReabastecimiento>(ANaveEnemigaReabastecimiento::StaticClass());
	}
	return nullptr;
}

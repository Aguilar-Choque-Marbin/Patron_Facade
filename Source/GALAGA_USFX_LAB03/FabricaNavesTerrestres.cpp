// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"
#include "FabricaNavesTerrestres.h"

ANaveEnemiga* AFabricaNavesTerrestres::CreacionNaves(FString tipoNave)
{
	if (tipoNave == "Reabastecimiento")
	{
		return GetWorld()->SpawnActor<ANaveEnemigaReabastecimiento>(ANaveEnemigaReabastecimiento::StaticClass());
	}
	return nullptr;
}

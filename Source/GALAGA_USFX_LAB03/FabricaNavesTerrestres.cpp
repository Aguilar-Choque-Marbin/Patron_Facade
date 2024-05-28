// Fill out your copyright notice in the Description page of Project Settings.

#include "FabricaNavesTerrestres.h"

#include "NaveEnemigaReabastecimiento.h"




ANaveEnemiga* AFabricaNavesTerrestres::CreacionNave(FString Nave)
{
	if (Nave.Equals("Reabastecimiento"))
	{
		return GetWorld()->SpawnActor<ANaveEnemigaReabastecimiento>(ANaveEnemigaReabastecimiento::StaticClass());
	}
	else return nullptr;
}

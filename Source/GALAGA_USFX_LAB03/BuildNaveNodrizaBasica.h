// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuildNave.h"
#include "BuildNaveNodrizaBasica.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API ABuildNaveNodrizaBasica : public AActor , public IIBuildNave
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildNaveNodrizaBasica();

	//class ANaveNodriza* GenerarNave1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//virtual void ConstruirNuevaNave(int y) override;
	//virtual void ConstruirArmas(int u) override;
	//virtual void ConstruirMotores(int i) override;
	//virtual void ConstruirProyectiles(int o) override;
	//virtual ANaveNodriza* NaveNodriza() override;

};

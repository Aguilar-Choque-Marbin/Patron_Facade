// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuildNave.h"
#include "BuildNaveNodrizaConcreto.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API ABuildNaveNodrizaConcreto : public AActor , public IIBuildNave
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildNaveNodrizaConcreto();

	class ANaveNodriza* GenerarNave;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void ConstruirNuevaNave(int y) override;
	void ConstruirArmas(int u) override;
	void ConstruirMotores(int i) override;
	void ConstruirProyectiles(int o) override;
	class ANaveNodriza* NaveNodriza() override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuildNave.h"
#include "DirectorNaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API ADirectorNaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorNaveNodriza();

	IIBuildNave* GeneradorNaveNodriza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void OrdenarConstruccionNaveNodriza(AActor* Generador);
	void CrearNaveNodriza();
	void CrearNaveNodriza2();
	class ANaveNodriza* CreacionNaveNodriza();

};

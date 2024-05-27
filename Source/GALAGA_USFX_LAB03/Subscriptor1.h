// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISubscriptor.h"
#include "ITransformar.h"
#include "Subscriptor1.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API ASubscriptor1 : public AActor, public IISubscriptor, public IITransformar
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASubscriptor1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void EstablecerReloj(class AReloj* _Reloj);
	void Actualizar(APublicadorObserver* _Publicador) override;
	void TransformarSubscriptor() override;
	void DestruirSubscripcion();

	FString Tiempo;


	UPROPERTY(VisibleAnywhere, Category = "Malla")
	UStaticMeshComponent* MallaSub1;

	//UPROPERTY()
	//class AProyectilNodriza* Proyectil; ///cambiar

	//UPROPERTY()
	//class AEscudoNodriza* EscudoNave;  ///cambiar

private:

	UPROPERTY(VisibleAnywhere, Category = "Subscriptor")
	class AReloj* Reloj;

};

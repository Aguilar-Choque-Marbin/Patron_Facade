// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ISubscriptor.h"
#include "ITransformar.h"

#include "Subscriptor2.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API ASubscriptor2 : public AActor , public IISubscriptor, public IITransformar
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASubscriptor2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	void EstablecerReloj(class AReloj* _RelojSubscriptor);
	void Actualizar(APublicadorObserver* _Publicador) override;
	void TransformarSubscriptor() override;
	void ActivarArmamento() override;
	void MejoraArmamento(float DeltaTime) override;
	void ActivarSuperVelocidad() override;
	void MejorarSuperVelocidad() override;
	void ActivarEscudo() override;
	void MejorarImplementarEscudo() override;
	void DestruirSubscripcion();

	void Mover(float DeltaTime);

	FString Tiempo;

	int Armamento;
	int SArmamento;
	int Escudo;
	int SVelocidad;

	float Tiempos;
	float Tiempos2;

	FVector PosIn;
	int Velocidad;


	UPROPERTY(VisibleAnywhere, Category = "Malla")
	UStaticMeshComponent* MallaSub2;

	UPROPERTY()
	class AGALAGA_USFX_LAB03Projectile* Proyectil; ///cambiar

	UPROPERTY()
	class AMotores* EscudoNave;  ///cambiar

private:

	UPROPERTY(VisibleAnywhere, Category = "Subscriptor")
	class AReloj* Reloj;
};

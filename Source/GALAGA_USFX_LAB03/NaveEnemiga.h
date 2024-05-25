// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGA_USFX_LAB03_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: 
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected:
	float Velocidad;
	float Resistencia; //numeros de disparos que puede recibir antes de ser destruido
	float DanioProducido; //potencia de cada proyectil que dispara la nave
	float TiempoDisparo; //tiempo que debe transcurrir entre cada disparo
	float Experiencia;
	float Energia;
	float Peso;
	float Volumen;

	int Trayectoria; //cada valor numerico represneta a una funcion que la nave debe asumir para moverse
	int CapacidadPasajeros; //numero de naces que puede transportar
	int CapacidadMunicion; // numero de disparos que puede realizar antes de recargar
	int TipoNave; //cada valor numerico representa un tipo de nave enemiga

	FString Nombre;
	FVector Posicion;

public:
	FORCEINLINE float GetVelocidad() const { return Velocidad; }
	FORCEINLINE float GetResistencia() const { return Resistencia; }
	FORCEINLINE float GetDanioProducido() const { return DanioProducido; }
	FORCEINLINE float GetTiempoDisparo() const { return TiempoDisparo; }
	FORCEINLINE float GetExperiencia() const { return Experiencia; }
	FORCEINLINE float GetEnergia() const { return Energia; }
	FORCEINLINE float GetPeso() const { return Peso; }
	FORCEINLINE float GetVolumen() const { return Volumen; }

	FORCEINLINE int GetTrayectoria() const { return Trayectoria; }
	FORCEINLINE int GetCapacidadPasajeros() const { return CapacidadPasajeros; }
	FORCEINLINE int GetCapacidadMunicion() const { return CapacidadMunicion; }
	FORCEINLINE int GetTipoNave() const { return TipoNave; }

	FORCEINLINE FString GetNombre() const { return Nombre; }
	FORCEINLINE FVector GetPosicion() const { return Posicion; }


	FORCEINLINE void SetVelocidad(float _Velocidad) { Velocidad = _Velocidad; }
	FORCEINLINE void SetResistencia(float _Resistencia) { Resistencia = _Resistencia; }
	FORCEINLINE void SetDanioProducido(float _DanioProducido) { DanioProducido = _DanioProducido; }
	FORCEINLINE void SetTiempoDisparo(float _TiempoDisparo) { TiempoDisparo = _TiempoDisparo; }
	FORCEINLINE void SetExperiencia(float _Experiencia) { Experiencia = _Experiencia; }
	FORCEINLINE void SetEnergia(float _Energia) { Energia = _Energia; }
	FORCEINLINE void SetPeso(float _Peso) { Peso = _Peso; }
	FORCEINLINE void SetVolumen(float _Volumen) { Volumen = _Volumen; }

	FORCEINLINE void SetTrayectoria(int _Trayectoria) { Trayectoria = _Trayectoria; }
	FORCEINLINE void SetCapacidadPasajeros(int _CapacidadPasajeros) { CapacidadPasajeros = _CapacidadPasajeros; }
	FORCEINLINE void SetCapacidadMunicion(int _CapacidadMunicion) { CapacidadMunicion = _CapacidadMunicion; }
	FORCEINLINE void SetTipoNave(int _TipoNave) { TipoNave = _TipoNave; }

	FORCEINLINE void SetNombre(FString _Nombre) { Nombre = _Nombre; }
	FORCEINLINE void SetPosicion(FVector _Posicion) { Posicion = _Posicion; }

protected:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );

};

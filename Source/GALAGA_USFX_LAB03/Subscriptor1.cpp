// Fill out your copyright notice in the Description page of Project Settings.


#include "Subscriptor1.h"
#include "Reloj.h"

// Sets default values
ASubscriptor1::ASubscriptor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	MallaSub1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaSub1->SetStaticMesh(ShipMesh.Object);

	Tiempo = "";
}

// Called when the game starts or when spawned
void ASubscriptor1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASubscriptor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASubscriptor1::EstablecerReloj(AReloj* _Reloj)
{
	if (!_Reloj)
	{
		GEngine->AddOnScreenDebugMessage(-1, -15.0f, FColor::Red, FString::Printf(TEXT("El reloj del subscriptor no existe")));
		return;
	}
	Reloj = _Reloj;
	Reloj->Subscribirse(this);
}

void ASubscriptor1::Actualizar(APublicadorObserver* _Publicador)
{
	TransformarSubscriptor();
	//MejorarSubscriptor();
}

void ASubscriptor1::TransformarSubscriptor()
{
	Tiempo = Reloj->GetHora();
	if (Tiempo.Equals("12:00")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT
		("Son las %s, transformate en NaveEnemiga"), *Tiempo));
	}
	if (Tiempo.Equals("18:00")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT
		("Son las %s, transformate en una capsula"), *Tiempo));
	}
	if (Tiempo.Equals("22:00")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT
		("Son las %s, transformate en un jugador auxiliar"), *Tiempo));
	}
}

void ASubscriptor1::DestruirSubscripcion()
{
	Reloj->DeSubscribirse(this);
}


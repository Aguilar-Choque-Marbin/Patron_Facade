// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEscudo.h"

// Sets default values
ANaveEscudo::ANaveEscudo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	MallaEscudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaEscudo->SetStaticMesh(ShipMesh.Object);

}

// Called when the game starts or when spawned
void ANaveEscudo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


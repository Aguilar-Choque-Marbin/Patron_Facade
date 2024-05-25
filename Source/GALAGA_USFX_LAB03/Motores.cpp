// Fill out your copyright notice in the Description page of Project Settings.


#include "Motores.h"

// Sets default values
AMotores::AMotores()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	MallaMotorNave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaMotorNave->SetStaticMesh(ShipMesh.Object);
}

// Called when the game starts or when spawned
void AMotores::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotores::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


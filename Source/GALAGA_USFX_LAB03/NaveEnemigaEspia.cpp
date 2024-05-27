// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	//mallaNaveEnemiga->BodyInstance.SetCollisionProfileName("NaveEspia");
	mallaNaveEnemiga->SetCollisionProfileName(TEXT("NaveEspia"));
	mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveEnemigaEspia::OnHit);
	PosicionInicialX = -700.0f;
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaEspia::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

	}
	Destroy();
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float NuevaX = DeltaTime * Velocidad;

	PosicionActual = FVector(PosicionActual.X + NuevaX, PosicionActual.Y, PosicionActual.Z);
	if (PosicionActual.X >= 0)
	{
		PosicionActual.X = PosicionInicialX;
	}
	SetActorLocation(PosicionActual);
}

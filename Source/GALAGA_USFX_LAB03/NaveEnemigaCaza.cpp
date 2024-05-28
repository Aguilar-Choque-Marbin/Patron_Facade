// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	mallaNaveEnemiga->BodyInstance.SetCollisionProfileName("NaveCaza");
	//mallaNaveEnemiga->SetEnableGravity(false);
	//mallaNaveEnemiga->SetSimulatePhysics(true);
	
	//mallaNaveEnemiga->SetGravityScale(0.f);
	mallaNaveEnemiga->SetNotifyRigidBodyCollision(true);
	mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveEnemigaCaza::OnHit);

	PosicionInicialX = 0.0f;
	float Limite = 0.0f;
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float NuevaX = DeltaTime * Velocidad;

	PosicionActual = FVector(PosicionActual.X - NuevaX, PosicionActual.Y, PosicionActual.Z);
	if (PosicionActual.X >= 700)
	{
		PosicionActual.X = PosicionInicialX;
	}
	SetActorLocation(PosicionActual);
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mover(DeltaTime);

}

void ANaveEnemigaCaza::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		
	}
	Destroy();
}

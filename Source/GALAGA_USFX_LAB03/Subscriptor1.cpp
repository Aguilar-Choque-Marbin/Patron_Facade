// Fill out your copyright notice in the Description page of Project Settings.


#include "Subscriptor1.h"
#include "Reloj.h"
#include "GALAGA_USFX_LAB03Projectile.h"
#include "Motores.h"

// Sets default values
ASubscriptor1::ASubscriptor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	MallaSub1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaSub1->SetStaticMesh(ShipMesh.Object);

	//MovimientoNaves = CreateDefaultSubobject<UMovimientoNaves>(TEXT("MovimientoNaves"));

	Tiempo = "";

	SVelocidad = 1;
	Armamento = 0;
	SArmamento = 0;
	Escudo = 0;

	Tiempos = 1.0f;
	Tiempos2 = 1.0f;

	Velocidad = 100.0f;
}

// Called when the game starts or when spawned
void ASubscriptor1::BeginPlay()
{
	Super::BeginPlay();
	
	PosIn = GetActorLocation();
}

// Called every frame
void ASubscriptor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mover(DeltaTime);

	Tiempos += DeltaTime;
	Tiempos2 += DeltaTime;


	if (Tiempos > 2.0f)
	{
		ActivarArmamento();
		MejoraArmamento(DeltaTime);
		Tiempos = 0.0f;
	}

	if (Tiempos2 > 10.0f)
	{
		MejorarImplementarEscudo();
		Tiempos2 = 0.0f;
	}
}

void ASubscriptor1::EstablecerReloj(AReloj* _RelojSubscriptor)
{
	if (!_RelojSubscriptor)
	{
		GEngine->AddOnScreenDebugMessage(-1, -15.0f, FColor::Red, FString::Printf(TEXT("El reloj del subscriptor no existe")));
		return;
	}
	Reloj = _RelojSubscriptor;
	Reloj->Subscribirse(this);
}

void ASubscriptor1::Actualizar(APublicadorObserver* _Publicador)
{
	TransformarSubscriptor();
}

void ASubscriptor1::TransformarSubscriptor()
{
	Tiempo = Reloj->GetHora();
	if (Tiempo.Equals("12:00")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT("Son las %s, transformate en NaveEnemiga basica"), *Tiempo));
		ActivarSuperVelocidad();
		Armamento = 1;
		ActivarArmamento();
	}
	if (Tiempo.Equals("18:00")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT("Son las %s, transformate en NaveEnemiga Intermedia"), *Tiempo));
		SArmamento = 1;
		MejoraArmamento(0.0f);
		ActivarEscudo();
	}
	if (Tiempo.Equals("22:00")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT("Son las %s, transformate en una NaveEnemiga Dificil"), *Tiempo));
		MejorarSuperVelocidad();
	}
}


void ASubscriptor1::ActivarArmamento()
{
	if (Armamento == 1)
	{
		FVector PosNave = GetActorLocation();
		FRotator RotNave = GetActorRotation();

		FVector DistanciaP = FVector(-100.0f, 0.0f, 0.0f);

		FVector PosP = PosNave + GetActorForwardVector() * DistanciaP;

		Proyectil = GetWorld()->SpawnActor<AGALAGA_USFX_LAB03Projectile>(PosP, RotNave);

	}
}

void ASubscriptor1::MejoraArmamento(float DeltaTime)
{
	if (SArmamento == 1)
	{
		FVector PosNave = GetActorLocation();
		FRotator RotNave = GetActorRotation();

		FVector DistanciaP = FVector(-300.0f, 0.0f, 0.0f);

		FVector PosP = PosNave + GetActorForwardVector() * DistanciaP;

		Proyectil = GetWorld()->SpawnActor<AGALAGA_USFX_LAB03Projectile>(PosP, RotNave);

	}
}

void ASubscriptor1::ActivarSuperVelocidad()
{
	Velocidad = Velocidad * 2.0f;
}

void ASubscriptor1::MejorarSuperVelocidad()
{
	Velocidad = Velocidad * 2.0f;
}

void ASubscriptor1::ActivarEscudo()
{
	Escudo = 1;
}

void ASubscriptor1::MejorarImplementarEscudo()
{
	if (Escudo == 1)
	{
		FVector PosNaveEscudo = GetActorLocation();
		FRotator RotNaveEscudo = GetActorRotation();

		FVector DistanciaPEscudo = FVector(-100.0f, 0.0f, 0.0f);

		FVector PosPEscudo = PosNaveEscudo + GetActorForwardVector() * DistanciaPEscudo;

		if (EscudoNave)
		{
			EscudoNave->Destroy();
		}

		EscudoNave = GetWorld()->SpawnActor<AMotores>(PosPEscudo, RotNaveEscudo);
	}
}

void ASubscriptor1::DestruirSubscripcion()
{
	Reloj->DeSubscribirse(this);
}

void ASubscriptor1::Mover(float DeltaTime)
{
	FVector PosActual = GetActorLocation();
	FVector NuevaPos = PosActual + FVector(0.0f, Velocidad * DeltaTime, 0.0f);

	FVector LimiteDerecho = PosIn + FVector(0.0f, 400.0f, 0.0f);
	FVector LimiteIzquierdo = PosIn - FVector(0.0f, 400.0f, 0.0f);

	if (PosActual.Y > LimiteDerecho.Y && Velocidad > 0)
	{
		Velocidad *= -1;
	}
	else if (PosActual.Y < LimiteIzquierdo.Y && Velocidad < 0)
	{
		Velocidad *= -1;
	}

	SetActorLocation(NuevaPos);
}


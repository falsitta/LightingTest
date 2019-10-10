// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create a sphere collider at size 40 for object collision
	USphereComponent* sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = sphereComponent;
	sphereComponent->InitSphereRadius(40.0f);
	sphereComponent->SetCollisionProfileName(TEXT("LightActorCollision"));

	//Create a static mesh to visualize collision, searches for asset based on file location.
	UStaticMeshComponent* staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	staticMesh->SetupAttachment(RootComponent);
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> staticMeshAsset(TEXT("/Game/Meshes/SM_DiscoLight02_DiscoLight02.SM_DiscoLight02_DiscoLight02'"));

	//if it all works, set the mesh, location and scale
	/*if (staticMeshAsset.Succeeded())
	{
		staticMesh->SetStaticMesh(staticMeshAsset.Object);
		staticMesh->SetRelativeLocation(FVector( 0, 0, 0));
		staticMesh->SetWorldScale3D(FVector(1));
			
	}*/


}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


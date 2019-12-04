// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Scene.h"
#include "Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionConstant.h"
//#include <Runtime\Engine\Private\Materials\MaterialExpressions.cpp>
//#include "Runtime/Engine/Private/Materials/MaterialExpressions.cpp"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create a sphere collider at size 40 for object collision
	
	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	RootComponent = sphereComponent;

	sphereComponent->InitSphereRadius(40.0f);
	sphereComponent->SetCollisionProfileName(TEXT("LightActorCollision"));

	//Create a static mesh to visualize collision, searches for asset based on file location.
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));

	OnMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OnMaterial"));
	OffMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OffMaterial"));

	/*UMaterialExpressionConstant* ZeroExpression = NewObject<UMaterialExpressionConstant>(OnMaterial);
	ZeroExpression->R = 0.0f;
	OnMaterial->Expressions.Add(ZeroExpression);
	OnMaterial->Specular.Expression = ZeroExpression;
	FStringAssetReference DiffuseAssetPath("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'");
	UTexture* DiffuseTexture = Cast(DiffuseAssetPath.TryLoad());
	if (DiffuseTexture)
	{
		UMaterialExpressionTextureSample* TextureExpression = NewObject(OnMaterial);
		TextureExpression->Texture = DiffuseTexture;
		TextureExpression->SamplerType = SAMPLERTYPE_Color;
		OnMaterial->Expressions.Add(TextureExpression);
		OnMaterial->BaseColor.Expression = TextureExpression;
	}*/




	staticMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> staticMeshAsset(TEXT("StaticMesh'/Game/Meshes/SM_DiscoLight02_DiscoLight02.SM_DiscoLight02_DiscoLight02'"));

	//if it all works, set the mesh, location and scale
	if (staticMeshAsset.Succeeded())
	{
		staticMesh->SetStaticMesh(staticMeshAsset.Object);
		staticMesh->SetRelativeLocation(FVector( 0, 0, 0));
		staticMesh->SetWorldScale3D(FVector(1));
		
	}

	pointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	UE_LOG(LogTemp, Warning, TEXT("TESTOSJG:SGJD"));
	pointLight->SetIntensity(500.0f);
	pointLight->SetIntensityUnits(ELightUnits::Lumens);
	pointLight->SetLightColor(FLinearColor(0.09,1, 0.955, 1), true);
	

	pointLight->SetupAttachment(RootComponent);
	pointLight->SetRelativeLocation(FVector(0, 40, 0));
	
	


}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	FString testString = (TEXT("This is a log"));
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is the log!"));
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, testString);
	staticMesh->SetMaterial(0, OnMaterial);*/

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


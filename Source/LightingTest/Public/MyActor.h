// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"


#include "MyActor.generated.h"

UCLASS()
class LIGHTINGTEST_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, Category="Damage")
		int32 TotalDamage;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Mesh")
		USphereComponent* sphereComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Mesh")
		UStaticMeshComponent* staticMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Light")
		UPointLightComponent* pointLight;

	UPROPERTY(EditAnywhere)
		class UMaterial* OnMaterial;

	UPROPERTY(EditAnywhere)
		class UMaterial* OffMaterial;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

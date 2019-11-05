// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/SWindow.h"
#include "Widgets/SCanvas.h"
#include "Components/Widget.h"
#include "Widgets/SPanel.h"

#include "Templates/SharedPointer.h"
#include "Framework/Application/SlateApplication.h"
#include "UserWidgetBase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class LIGHTINGTEST_API UUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	UUserWidgetBase(const FObjectInitializer& ObjectInitializer);

	// Optionally override the Blueprint "Event Construct" event
	virtual void NativeConstruct() override;



	// Optionally override the tick event
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	/*
	UPROPERTY(BlueprintReadOnly)
		class USlider* ItemSlider = nullptr;
	
	*/
	UPROPERTY()
		class UCanvasPanel* canvasPanel = nullptr;
	
	
	class SCanvas* sCanvas = nullptr;

	/*UPROPERTY(CPF_BlueprintReadOnly)
	 class ULightIntensitySliderBP* slider;*/


};

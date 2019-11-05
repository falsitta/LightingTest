// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SViewport.h"
#include "Widgets/Layout/SGridPanel.h"
#include "Widgets/SWindow.h"
#include "Widgets/SCompoundWidget.h"


/**
 * 
 */
class LIGHTINGTEST_API SSlateWidgetTest : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSlateWidgetTest)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	SWindow sWindow;
	

};

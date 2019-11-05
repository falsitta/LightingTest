// Fill out your copyright notice in the Description page of Project Settings.


#include "SSlateWidgetTest.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSlateWidgetTest::Construct(const FArguments& InArgs)
{

		SNew(SWindow)
		.AutoCenter(EAutoCenter::None)
		.Title(FText::FromString(TEXT("Control Window")))
		.IsInitiallyMaximized(false)
		.ScreenPosition(FVector2D(0, 0))
		.ClientSize(FVector2D(500, 800))
		.CreateTitleBar(true)
		.SizingRule(ESizingRule::UserSized)
		.SupportsMaximize(false)
		.SupportsMinimize(true)
		.HasCloseButton(true);

	//TSharedRef<SWindow> SlateWinRef = sWindow.ToSharedRef();
	//swindow cannot find toshared ref, does not exist, need to figure out how to solve this

//	FSlateApplication& SlateApp = FSlateApplication::Get();

	//SlateApp.AddWindow(SlateWinRef, true);

	//SlateWinRef->SetContent(SNew(SControlWidget));
	/*ChildSlot
	[
		// Populate the widget

	];
	*/


}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

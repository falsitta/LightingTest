// Fill out your copyright notice in the Description page of Project Settings.



#include "UserWidgetBase.h"

UUserWidgetBase::UUserWidgetBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


void UUserWidgetBase::NativeConstruct()
{
	// Do some custom setup

	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();

	TSubclassOf<UUserWidget> userWidget;


	TSharedRef<SWindow> window = SNew(SWindow);

	TSharedPtr<SWindow> RootWindow = FGlobalTabmanager::Get()->GetRootWindow();

	class UPanel* panel = nullptr;

	


	if (RootWindow.IsValid())
	{
		FSlateApplication::Get().AddWindowAsNativeChild(window, RootWindow.ToSharedRef());

		UE_LOG(LogTemp, Warning, TEXT("WINDOW added as native child"));

	}
	else
	{
		FSlateApplication::Get().AddWindow(window);

		UE_LOG(LogTemp, Warning, TEXT("WINDOW added as base child"));
	}
	/*if (ItemSlider)
	{

	}*/

	window->SetIndependentViewportSize(FVector2D(500, 500));
	window->ShowWindow();
	window->SetSizingRule(ESizingRule::UserSized);
	window->AddOverlaySlot(-1);
	window->EnableWindow(true);
	window->GetContent();
	window->SetViewportSizeDrivenByWindow(true);
	window->CreateAccessibleWidget();

	//sCanvas->AssignParentWidget(window);
	/*sCanvas->AddSlot();
	sCanvas->AddSlot();
	sCanvas->AddSlot();*/
	
	
	//slider->AddToRoot();

	//UE_LOG(LogTemp, Log, "WINDOW", )


}


void UUserWidgetBase::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);

	// Do your custom tick stuff here
}
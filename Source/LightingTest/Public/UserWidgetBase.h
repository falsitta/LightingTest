// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/SWindow.h"
#include "Widgets/SCanvas.h"
#include "Misc/Attribute.h"
#include "Layout/Visibility.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Input/Reply.h"
#include "Styling/SlateColor.h"
#include "Widgets/SWidget.h"
#include "Textures/SlateIcon.h"
#include "Framework/Commands/UICommandInfo.h"
#include "Framework/Commands/UICommandList.h"
#include "Framework/MultiBox/MultiBox.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Components/Widget.h"
#include "Widgets/SPanel.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Slate\Private\Framework\MultiBox\SMenuEntryBlock.h"
#include "Framework/Commands/GenericCommands.h"
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

	void AddActorSpecificMenu(FMenuBuilder& MenuBuilder, const TSharedPtr<FUICommandList>& InCommandList, const TArray<AActor*>& SelectedActors);

	// Optionally override the Blueprint "Event Construct" event
	virtual void NativeConstruct() override;



	// Optionally override the tick event
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	void CreateMenuEntry(FMenuBuilder& InMenuBuilder) const;

	FText GetButtonLabel() const;

	//TSharedRef< SWidget > BuildMenuBarWidget(const FMenuEntryBuildParams& InBuildParams);

	//TSharedRef<SWidget> OnConstructContextMenu() const;

	void OnConstructContextMenu();
	/*
	UPROPERTY(BlueprintReadOnly)
		class USlider* ItemSlider = nullptr;
	
	*/
	UPROPERTY()
		class UCanvasPanel* canvasPanel = nullptr;
	
	
	class SCanvas* sCanvas = nullptr;

protected:
	TSharedPtr<class FUICommandList> CommandList;

	/*UPROPERTY(CPF_BlueprintReadOnly)
	 class ULightIntensitySliderBP* slider;*/

private:
	// Friend our corresponding widget class
	friend class SMenuEntryBlock;
	friend class FSlateMacMenu;

	/** Optional overridden text label for this menu entry.  If not set, then the action's label will be used instead. */
	TAttribute<FText> LabelOverride;

	/** Optional overridden tool tip for this menu entry.  If not set, then the action's tool tip will be used instead. */
	TAttribute<FText> ToolTipOverride;

	/** Optional overridden icon for this tool bar button.  IF not set, then the action's icon will be used instead. */
	FSlateIcon IconOverride;

	/** Optional menu entry builder associated with this entry for building sub-menus and pull down menus */
	FNewMenuDelegate EntryBuilder;

	/** Delegate that returns an entire menu */
	FOnGetContent MenuBuilder;

	/** Widget to be added to the menu */
	TSharedPtr<SWidget> EntryWidget;

	/** True if this menu entry opens a sub-menu */
	bool bIsSubMenu;

	/** True if this menu entry opens a sub-menu by clicking on it only */
	bool bOpenSubMenuOnClick;

	/** In the case where a command is not bound, the user interface action type to use.  If a command is bound, we
		simply use the action type associated with that command. */
	EUserInterfaceActionType UserInterfaceActionType;

	/** True if the menu should close itself and all its children or the entire open menu stack */
	bool bCloseSelfOnly;

	/** An extender that this menu entry should pass down to its children, so they get extended properly */
	TSharedPtr<FExtender> Extender;

	/** For submenus, whether the menu should be closed after something is selected */
	bool bShouldCloseWindowAfterMenuSelection;

	/** Whether to invert the label text's color on hover */
	bool bInvertLabelOnHover;
};

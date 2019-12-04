// Fill out your copyright notice in the Description page of Project Settings.


#include "SEditorViewport.h"
#include "SCommonEditorViewportToolbarBase.h"
#include "Widgets/SBoxPanel.h"
#include "Layout/WidgetPath.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/SToolTip.h"
#include "Widgets/Colors/SColorBlock.h"
#include "Widgets/Input/SCheckBox.h"
#include "SlateBasics.h"
#include "SlateExtras.h"

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

	//FBaseMenuBuilder* baseMenuBuilder;
	//SMenuEntryBlock* menuEntryBlock;
	FMenuBuilder MenuBuilder(bShouldCloseWindowAfterMenuSelection, NULL);
	OnConstructContextMenu();
	//menuEntryBlock->BuildMultiBlockWidget();
	//menuEntryBlock->Construct();
	/*menuEntryBlock->CreateAccessibleWidget();
	menuEntryBlock->*/
	//baseMenuBuilder->AddMenuEntry()
	//menuBuilder.AddMenuEntry(LOCTEXT("GameplayTagWidget_RenameTag", "Rename"), LOCTEXT("GameplayTagWidget_RenameTagTooltip", "Rename this tag"), FSlateIcon(), FUIAction(RenameAction));
	//menuBuilder->MakeWidget();

	//TSharedRef<SWindow> window = SNew(SWindow);

	//TSharedPtr<SWindow> RootWindow = FGlobalTabmanager::Get()->GetRootWindow();

	//class UPanel* panel = nullptr;

	//


	//if (RootWindow.IsValid())
	//{
	//	FSlateApplication::Get().AddWindowAsNativeChild(window, RootWindow.ToSharedRef());

	//	UE_LOG(LogTemp, Warning, TEXT("WINDOW added as native child"));

	//}
	//else
	//{
	//	FSlateApplication::Get().AddWindow(window);

	//	UE_LOG(LogTemp, Warning, TEXT("WINDOW added as base child"));
	//}
	///*if (ItemSlider)
	//{

	//}*/

	//window->SetIndependentViewportSize(FVector2D(500, 500));
	//window->ShowWindow();
	//window->SetSizingRule(ESizingRule::UserSized);
	//window->AddOverlaySlot(-1);
	//window->EnableWindow(true);
	//window->GetContent();
	//window->SetViewportSizeDrivenByWindow(true);
	//window->CreateAccessibleWidget();

	//sCanvas->AssignParentWidget(window);
	/*sCanvas->AddSlot();
	sCanvas->AddSlot();
	sCanvas->AddSlot();*/
	
	
	//slider->AddToRoot();

	//UE_LOG(LogTemp, Log, "WINDOW", )
	CommandList = MakeShareable(new FUICommandList);
	//InParentCommandList->Append(CommandList.ToSharedRef());

	//CommandList->MapAction(
	//	TileMapCommands.AddNewLayerAbove,
	//	FExecuteAction::CreateSP(this, &STileLayerList::AddNewLayerAbove));

	//CommandList->MapAction(
	//	TileMapCommands.AddNewLayerBelow,
	//	FExecuteAction::CreateSP(this, &STileLayerList::AddNewLayerBelow));

	//CommandList->MapAction(
	//	GenericCommands.Cut,
	//	FExecuteAction::CreateSP(this, &STileLayerList::CutLayer),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingSelectedLayer));

	//CommandList->MapAction(
	//	GenericCommands.Copy,
	//	FExecuteAction::CreateSP(this, &STileLayerList::CopyLayer),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingSelectedLayer));

	//CommandList->MapAction(
	//	GenericCommands.Paste,
	//	FExecuteAction::CreateSP(this, &STileLayerList::PasteLayerAbove),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanPasteLayer));

	//CommandList->MapAction(
	//	GenericCommands.Duplicate,
	//	FExecuteAction::CreateSP(this, &STileLayerList::DuplicateLayer),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingSelectedLayer));

	//CommandList->MapAction(
	//	GenericCommands.Delete,
	//	FExecuteAction::CreateSP(this, &STileLayerList::DeleteLayer),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingSelectedLayer));

	//CommandList->MapAction(
	//	GenericCommands.Rename,
	//	FExecuteAction::CreateSP(this, &STileLayerList::RenameLayer),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingSelectedLayer));

	//CommandList->MapAction(
	//	TileMapCommands.MergeLayerDown,
	//	FExecuteAction::CreateSP(this, &STileLayerList::MergeLayerDown),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingLayerBelow));

	//CommandList->MapAction(
	//	TileMapCommands.MoveLayerUp,
	//	FExecuteAction::CreateSP(this, &STileLayerList::MoveLayerUp, /*bForceToTop=*/ false),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingLayerAbove));

	//CommandList->MapAction(
	//	TileMapCommands.MoveLayerDown,
	//	FExecuteAction::CreateSP(this, &STileLayerList::MoveLayerDown, /*bForceToBottom=*/ false),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingLayerBelow));

	//CommandList->MapAction(
	//	TileMapCommands.MoveLayerToTop,
	//	FExecuteAction::CreateSP(this, &STileLayerList::MoveLayerUp, /*bForceToTop=*/ true),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingLayerAbove));

	//CommandList->MapAction(
	//	TileMapCommands.MoveLayerToBottom,
	//	FExecuteAction::CreateSP(this, &STileLayerList::MoveLayerDown, /*bForceToBottom=*/ true),
	//	FCanExecuteAction::CreateSP(this, &STileLayerList::CanExecuteActionNeedingLayerBelow));

	//CommandList->MapAction(
	//	TileMapCommands.SelectLayerAbove,
	//	FExecuteAction::CreateSP(this, &STileLayerList::SelectLayerAbove, /*bTopmost=*/ false));

	//CommandList->MapAction(
	//	TileMapCommands.SelectLayerBelow,
	//	FExecuteAction::CreateSP(this, &STileLayerList::SelectLayerBelow, /*bBottommost=*/ false));

}


void UUserWidgetBase::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);

	// Do your custom tick stuff here
}

void UUserWidgetBase::CreateMenuEntry(FMenuBuilder& InMenuBuilder) const
{
	InMenuBuilder.AddSubMenu(LabelOverride.Get(), ToolTipOverride.Get(), EntryBuilder, false, IconOverride);
	
}

FText UUserWidgetBase::GetButtonLabel() const
{	
	return FText::FromString(FString::Printf(TEXT("HelloWorld")));
}


void UUserWidgetBase::OnConstructContextMenu()
{
	const bool bShouldCloseWindowAfterMenuSelection = true;
	FMenuBuilder MenuBuilder(bShouldCloseWindowAfterMenuSelection, CommandList);

	//const FTileMapEditorCommands& TileMapCommands = FTileMapEditorCommands::Get();
	const FGenericCommands& GenericCommands = FGenericCommands::Get();

	FSlateIcon DummyIcon(NAME_None, NAME_None);

	MenuBuilder.BeginSection("BasicOperations","BasicOperationsHeader");
	{
		MenuBuilder.AddMenuEntry(GenericCommands.Copy, NAME_None, TAttribute<FText>::Create(TAttribute<FText>
			::FGetter::CreateUObject(this, &UUserWidgetBase::GetButtonLabel)), TAttribute<FText>::Create(TAttribute<FText>
				::FGetter::CreateUObject(this, &UUserWidgetBase::GetButtonLabel)), DummyIcon);

		//MenuBuilder.AddMenuEntry(GenericCommands.Cut, NAME_None, TAttribute<FText>("Hello"), TAttribute<FText>("Hello"), DummyIcon);
		//MenuBuilder.AddMenuEntry(GenericCommands.Copy, NAME_None, TAttribute<FText>("Hello"), TAttribute<FText>("Hello"), DummyIcon);
		//MenuBuilder.AddMenuEntry(GenericCommands.Paste, NAME_None, TAttribute<FText>("Hello"), TAttribute<FText>("Hello"), DummyIcon);
		//MenuBuilder.AddMenuEntry(GenericCommands.Duplicate, NAME_None, TAttribute<FText>("Hello"), TAttribute<FText>("Hello"), DummyIcon);
		//MenuBuilder.AddMenuEntry(GenericCommands.Delete, NAME_None, TAttribute<FText>("Hello"), TAttribute<FText>("Hello"), DummyIcon);
		//MenuBuilder.AddMenuEntry(GenericCommands.Rename, NAME_None, TAttribute<FText>("Hello"), TAttribute<FText>("Hello"), DummyIcon);
		//MenuBuilder.AddMenuEntry(TileMapCommands.MergeLayerDown, NAME_None, TAttribute<FText>(), TAttribute<FText>(), DummyIcon);
		//MenuBuilder.AddMenuSeparator();
		//MenuBuilder->AddMenuEntry(FGenericCommands::Get().Delete);
		//MenuBuilder->AddMenuEntry(FGenericCommands::Get().Cut);
		//MenuBuilder->AddMenuEntry(FGenericCommands::Get().Copy);
		//MenuBuilder->AddMenuEntry(FGenericCommands::Get().Duplicate);
		//MenuBuilder.AddMenuEntry(TileMapCommands.SelectLayerAbove, NAME_None, TAttribute<FText>(), TAttribute<FText>(), DummyIcon);
		//MenuBuilder.AddMenuEntry(TileMapCommands.SelectLayerBelow, NAME_None, TAttribute<FText>(), TAttribute<FText>(), DummyIcon);
	}
	MenuBuilder.EndSection();

	/*MenuBuilder.BeginSection("OrderingOperations", LOCTEXT("OrderingOperationsHeader", "Order actions"));
	{
		MenuBuilder.AddMenuEntry(TileMapCommands.MoveLayerToTop, NAME_None, TAttribute<FText>(), TAttribute<FText>(), DummyIcon);
		MenuBuilder.AddMenuEntry(TileMapCommands.MoveLayerUp, NAME_None, TAttribute<FText>(), TAttribute<FText>(), DummyIcon);
		MenuBuilder.AddMenuEntry(TileMapCommands.MoveLayerDown, NAME_None, TAttribute<FText>(), TAttribute<FText>(), DummyIcon);
		MenuBuilder.AddMenuEntry(TileMapCommands.MoveLayerToBottom, NAME_None, TAttribute<FText>(), TAttribute<FText>(), DummyIcon);
	}
	MenuBuilder.EndSection();*/
	MenuBuilder.MakeWidget();
	//return MenuBuilder.MakeWidget();
}

//TSharedRef< SWidget> UUserWidgetBase::BuildMenuBarWidget(const FMenuEntryBuildParams& InBuildParams)
//{
//	const TAttribute<FText>& Label = InBuildParams.Label;
//	const TAttribute<FText>& EntryToolTip = InBuildParams.ToolTip;
//
//	check(OwnerMultiBoxWidget.IsValid());
//
//	const ISlateStyle* const StyleSet = InBuildParams.StyleSet;
//	const FName& StyleName = InBuildParams.StyleName;
//
//	/* Style for menu bar button with sub menu opened */
//	MenuBarButtonBorderSubmenuOpen = StyleSet->GetBrush(StyleName, ".Button.SubMenuOpen");
//	/* Style for menu bar button with no sub menu opened */
//	MenuBarButtonBorderSubmenuClosed = FCoreStyle::Get().GetBrush("NoBorder");
//
//	TSharedPtr< SMenuAnchor > NewMenuAnchor;
//
//
//	// Create a menu bar button within a pop-up anchor
//	TSharedRef<SWidget> Widget =
//		SAssignNew(NewMenuAnchor, SMenuAnchor)
//		.Placement(MenuPlacement_BelowAnchor)
//		// When the menu is summoned, this callback will fire to generate content for the menu window
//		.OnGetMenuContent(this, &SMenuEntryBlock::MakeNewMenuWidget)
//		[
//			SNew(SBorder)
//			.BorderImage(this, &SMenuEntryBlock::GetMenuBarButtonBorder)
//		.Padding(0)
//		[
//			// Create a button
//			SNew(SButton)
//			// Use the menu bar item style for this button
//		.ButtonStyle(StyleSet, ISlateStyle::Join(StyleName, ".Button"))
//		// Pull-down menu bar items always activate on mouse-down, not mouse-up
//		.ClickMethod(EButtonClickMethod::MouseDown)
//		// Pass along the block's tool-tip string
//		.ToolTipText(this, &SMenuEntryBlock::GetFilteredToolTipText, EntryToolTip)
//		// Add horizontal padding between the edge of the button and the content.  Also add a bit of vertical
//		// padding to push the text down from the top of the menu bar a bit.
//		.ContentPadding(FMargin(10.0f, 2.0f))
//		.ForegroundColor(FSlateColor::UseForeground())
//		.VAlign(VAlign_Center)
//		[
//			SNew(STextBlock)
//			.TextStyle(StyleSet, ISlateStyle::Join(StyleName, ".Label"))
//		.Text(Label)
//		.HighlightText(OwnerMultiBoxWidget.Pin().Get(), &SMultiBoxWidget::GetSearchText)
//		]
//	// Bind the button's "on clicked" event to our object's method for this
//	.OnClicked(this, &SMenuEntryBlock::OnMenuItemButtonClicked)
//		]
//		];
//
//	MenuAnchor = NewMenuAnchor;
//
//	return Widget;
//}
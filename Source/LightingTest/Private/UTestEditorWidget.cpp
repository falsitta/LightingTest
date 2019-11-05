// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UTestEditorWidget.h"
#include "Modules/ModuleManager.h"
#include "Misc/PackageName.h"
#include "GameFramework/Actor.h"
#include "Editor/EditorPerProjectUserSettings.h"
#include "AssetData.h"
#include "Engine/Selection.h"
#include "Editor.h"
#include "ScopedTransaction.h"
#include "IAssetTools.h"
#include "IContentBrowserSingleton.h"
#include "ContentBrowserModule.h"
#include "AssetToolsModule.h"


/////////////////////////////////////////////////////
#define LOCTEXT_NAMESPACE "EditorUtility"


UTestEditorWidget::UTestEditorWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UTestEditorWidget::ExecuteDefaultAction()
{
	check(bAutoRunDefaultAction);
	//FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "BlutilityAction", "Blutility Action"));
	FEditorScriptExecutionGuard ScriptGuard;

	Run();
}
#undef LOCTEXT_NAMESPACE
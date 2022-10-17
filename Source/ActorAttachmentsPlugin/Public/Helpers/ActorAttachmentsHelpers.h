// All rights reserved Dominik Pavlicek 2022.

#pragma once

#include "CoreMinimal.h"
#include "ActorAttachmentsHelpers.generated.h"

#pragma region AttachmentPointState 

UENUM(BlueprintType)
enum class EAttachmentPointState : uint8
{
	EPS_Active UMETA(DisplayName="Active"),
	EPS_Inactive UMETA(DisplayName="Inactive"),
	EPS_Occupied UMETA(DisplayName="Occupied"),

	hidden UMETA(hidden)
};

#pragma endregion 

#pragma region AttachmentRules

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAttachmentsRules
{
	GENERATED_BODY()

	FAttachmentsRules()
	{
		LocationRule = EAttachmentRule::KeepRelative;
		RotationRule = EAttachmentRule::KeepRelative;
		ScaleRule = EAttachmentRule::KeepRelative;
	};

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	EAttachmentRule LocationRule = EAttachmentRule::KeepRelative;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	EAttachmentRule RotationRule = EAttachmentRule::KeepRelative;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	EAttachmentRule ScaleRule = EAttachmentRule::KeepRelative;
};

#pragma endregion 

#pragma region AttachmentPoint

#define LOCTEXT_NAMESPACE "InventoryCategory"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FActorAttachmentPoint
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	FText AttachmentPointID = LOCTEXT("AttachmentPoint", "");

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	FText ComponentTagFilter = LOCTEXT("ComponentTag", "");

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	FText ParentComponent = LOCTEXT("ParentComponent", "");

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	FText ParentSocket = LOCTEXT("ParentSocket", "");

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true, ShowOnlyInnerProperties, FullyExpand=true))
	FAttachmentsRules AttachmentsRules;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	EAttachmentPointState State = EAttachmentPointState::EPS_Inactive;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,  meta=(NoResetToDefault=true, ExposeOnSpawn=true))
	EAttachmentPointState DefaultState = EAttachmentPointState::EPS_Inactive;
};

#undef LOCTEXT_NAMESPACE

#pragma endregion


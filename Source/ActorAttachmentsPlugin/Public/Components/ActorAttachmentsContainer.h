// All rights reserved Dominik Pavlicek 2022.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "ActorAttachmentsPlugin/Public/Helpers/ActorAttachmentsHelpers.h"

#include "ActorAttachmentsContainer.generated.h"

#define LOCTEXT_NAMESPACE "ActorAttachmentsContainer"

/**
 * 
 */
UCLASS(ClassGroup=(Attachment), Blueprintable, HideCategories=(Collision, AssetUserData, Cooking, ComponentTick, Activation), meta=(BlueprintSpawnableComponent, DisplayName = "Attachments Container", ShortTooltip="Attachments Container serves a role of middle man, attaching and managing configuration."))
class ACTORATTACHMENTSPLUGIN_API UActorAttachmentsContainer : public UActorComponent
{
	GENERATED_BODY()

public:	

	UActorAttachmentsContainer();

protected:

	virtual void BeginPlay() override;

protected:

	/**
	 * 
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attachments", meta=(NoResetToDefault=true, ShowInnerProperties))
	TArray<FActorAttachmentPoint> AttachmentPoints;

	/**
	 * 
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attachments", meta=(NoResetToDefault=true))
	FName MasterComponent;

private:

	UPROPERTY()
	USceneComponent* MasterComponentPtr = nullptr;
};

#undef LOCTEXT_NAMESPACE
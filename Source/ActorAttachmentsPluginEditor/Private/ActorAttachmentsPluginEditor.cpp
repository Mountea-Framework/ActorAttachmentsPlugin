#include "ActorAttachmentsPluginEditor.h"

DEFINE_LOG_CATEGORY(ActorAttachmentsPluginEditor);

#define LOCTEXT_NAMESPACE "FActorAttachmentsPluginEditor"

void FActorAttachmentsPluginEditor::StartupModule()
{
	UE_LOG(ActorAttachmentsPluginEditor, Warning, TEXT("ActorAttachmentsPluginEditor module has been loaded"));
}

void FActorAttachmentsPluginEditor::ShutdownModule()
{
	UE_LOG(ActorAttachmentsPluginEditor, Warning, TEXT("ActorAttachmentsPluginEditor module has been unloaded"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FActorAttachmentsPluginEditor, ActorAttachmentsPluginEditor)
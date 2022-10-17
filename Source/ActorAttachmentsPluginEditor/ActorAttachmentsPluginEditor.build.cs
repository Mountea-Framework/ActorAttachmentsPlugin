using UnrealBuildTool;
 
public class ActorAttachmentsPluginEditor : ModuleRules
{
	public ActorAttachmentsPluginEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UnrealEd"});
 
		PublicIncludePaths.AddRange(new string[] {"ActorAttachmentsPluginEditor/Public"});
		PrivateIncludePaths.AddRange(new string[] {"ActorAttachmentsPluginEditor/Private"});
	}
}
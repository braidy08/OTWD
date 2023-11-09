using UnrealBuildTool;

public class Starbreeze : ModuleRules {
    public Starbreeze(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "Overlay",
            "PhysXVehicles",
            "ProceduralMeshComponent",
            "SBZAnalytics",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}

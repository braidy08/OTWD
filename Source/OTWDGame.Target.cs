using UnrealBuildTool;

public class OTWDGameTarget : TargetRules {
	public OTWDGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"OTWD",
			"SBZAnalytics",
			"SBZScriptRemapper",
			"Starbreeze",
		});
	}
}

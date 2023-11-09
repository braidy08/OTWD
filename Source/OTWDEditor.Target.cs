using UnrealBuildTool;

public class OTWDEditorTarget : TargetRules {
	public OTWDEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"OTWD",
			"SBZAnalytics",
			"SBZScriptRemapper",
			"Starbreeze"
		});
	}
}

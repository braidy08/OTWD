#include "SBZLitPrefab.h"

ASBZLitPrefab::ASBZLitPrefab() {
    this->LinkedLight = NULL;
    this->AnimatedIntensityMultiplier = 1;
    this->bUseColorCurveAnimation = false;
    this->EmissiveExponent = 1;
    this->Deprecated_EmissiveColorName = TEXT("Emissive_Tint");
    this->Deprecated_EmissiveIntensityName = TEXT("Self Illumination Intensity");
    this->EmissiveColorName = TEXT("Emissive Tint");
    this->EmissiveIntensityName = TEXT("Emissive Brightness");
    this->bEnableLensFlare = false;
    this->FlareIntensityName = TEXT("Flare intesity ALL");
    this->FlareMultiplier = 1;
    this->FlareIntensityOffset = 1;
}


#include "SBZFlashlightLightActor.h"

ASBZFlashlightLightActor::ASBZFlashlightLightActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BatteryPercent = 1;
    this->LensFlarePowerMultiplier = 1;
    this->LensFlareOpacityMultiplier = 1;
    this->SpotLightComponent = NULL;
    this->LensFlareComponent = NULL;
}

int32 ASBZFlashlightLightActor::GetFlashLightQuality() const {
    return 0;
}



#include "SBZFlashlightLightActor.h"

int32 ASBZFlashlightLightActor::GetFlashLightQuality() const {
    return 0;
}

ASBZFlashlightLightActor::ASBZFlashlightLightActor() {
    this->BatteryPercent = 1;
    this->LensFlarePowerMultiplier = 1;
    this->LensFlareOpacityMultiplier = 1;
    this->SpotLightComponent = NULL;
    this->LensFlareComponent = NULL;
}


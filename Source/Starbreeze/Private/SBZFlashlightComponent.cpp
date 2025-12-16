#include "SBZFlashlightComponent.h"

USBZFlashlightComponent::USBZFlashlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlashlightStats = NULL;
    this->LightActor = NULL;
    this->BrightnessTimeline = NULL;
}

void USBZFlashlightComponent::TimelineFloatReturn(float Value) {
}



#include "SBZLaserSightComponent.h"

USBZLaserSightComponent::USBZLaserSightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisible = false;
    this->LaserSightActor = NULL;
    this->DotSpotLightComponent = NULL;
}



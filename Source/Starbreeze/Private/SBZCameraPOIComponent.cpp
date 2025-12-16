#include "SBZCameraPOIComponent.h"

USBZCameraPOIComponent::USBZCameraPOIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
}



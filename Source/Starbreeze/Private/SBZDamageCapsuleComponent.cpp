#include "SBZDamageCapsuleComponent.h"

USBZDamageCapsuleComponent::USBZDamageCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WoundIndex = 0;
    this->ParentPrimitiveComponent = NULL;
}



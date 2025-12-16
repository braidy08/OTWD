#include "SBZFirstPersonCameraAttachment.h"

USBZFirstPersonCameraAttachment::USBZFirstPersonCameraAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->CurrentWeapon = NULL;
}

void USBZFirstPersonCameraAttachment::SetSwayEnabled(bool bEnabled) {
}

void USBZFirstPersonCameraAttachment::SetPointing(const FRotator& Angle) {
}

FVector USBZFirstPersonCameraAttachment::CalculateWeaponPivotOffset() const {
    return FVector{};
}



#include "SBZFirstPersonCameraAttachment.h"

void USBZFirstPersonCameraAttachment::SetSwayEnabled(bool bEnabled) {
}

void USBZFirstPersonCameraAttachment::SetPointing(const FRotator& Angle) {
}

FVector USBZFirstPersonCameraAttachment::CalculateWeaponPivotOffset() const {
    return FVector{};
}

USBZFirstPersonCameraAttachment::USBZFirstPersonCameraAttachment() {
    this->OwningCharacter = NULL;
    this->CurrentWeapon = NULL;
}


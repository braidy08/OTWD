#include "SBZCosmeticPart.h"

void USBZCosmeticPart::PopPart(const FVector& HitDirection) {
}

void USBZCosmeticPart::OnBoneHit(const FHitResult& HitResult) {
}

USBZCosmeticPart::USBZCosmeticPart() {
    this->DirectionalImpulse = 1;
    this->HitImpulse = 1;
    this->TorqueImpulse = 1;
    this->DummyPartClass = NULL;
}


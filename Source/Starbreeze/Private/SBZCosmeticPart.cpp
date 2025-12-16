#include "SBZCosmeticPart.h"

USBZCosmeticPart::USBZCosmeticPart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->DirectionalImpulse = 1;
    this->HitImpulse = 1;
    this->TorqueImpulse = 1;
    this->DummyPartClass = NULL;
}

void USBZCosmeticPart::PopPart(const FVector& HitDirection) {
}

void USBZCosmeticPart::OnBoneHit(const FHitResult& HitResult) {
}



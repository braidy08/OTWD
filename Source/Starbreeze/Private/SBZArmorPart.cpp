#include "SBZArmorPart.h"

ASBZArmorPart::ASBZArmorPart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = true;
    this->DurabilityByDifficulty[0] = 1;
    this->DurabilityByDifficulty[1] = 1;
    this->DurabilityByDifficulty[2] = 1;
    this->DurabilityByDifficulty[3] = 1;
    this->DefaultDurability = 1;
    this->SpecialArmorType = ESBZSpecialArmorType::None;
    this->Mesh = NULL;
    this->DetachedArrmorPartLifeTime = 1;
    this->bApplyLeftoverDamage = true;
    this->HitArmorAudioEvent2D = NULL;
    this->PopAudioEvent2D = NULL;
    this->PopAudioEvent3D = NULL;
}

void ASBZArmorPart::ReplenishArmor() {
}

void ASBZArmorPart::PopGear(const FVector& HitDirection) {
}

void ASBZArmorPart::Multicast_PopArmor_Implementation(FVector HitDirection) {
}

bool ASBZArmorPart::HasPopped() const {
    return false;
}

float ASBZArmorPart::GetDurabilityMaximum() const {
    return 0.0f;
}

float ASBZArmorPart::GetDurabilityCurrent() const {
    return 0.0f;
}



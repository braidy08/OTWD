#include "OTWDWeaponPartRewardGenerator.h"

UOTWDWeaponPartRewardGenerator::UOTWDWeaponPartRewardGenerator() {
    this->bOverrideRarity = false;
    this->bUseWeaponPartSlotSafeGuard = true;
    this->bUseWeaponSafeGuard = true;
    this->WeaponPartSlotSafeGuardModifier = 1;
    this->WeaponSafeGuardModifier = 1;
    this->AvailableSlotEquippedMultiplier = 1;
    this->AssignableEquippedMultiplier = 1;
    this->AvailableSlotMultiplier = 1;
    this->AssignableMultiplier = 1;
    this->PossibleEquippedMultiplier = 1;
    this->PossibleMultiplier = 1;
    this->UnavailableMultiplier = 1;
}



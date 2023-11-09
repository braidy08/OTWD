#include "OTWDWeaponRewardGenerator.h"

float UOTWDWeaponRewardGenerator::GetBasePowerLevel(const UOTWDProfileSaveData* ProfileSaveData, float Range) {
    return 0.0f;
}

UOTWDWeaponRewardGenerator::UOTWDWeaponRewardGenerator() {
    this->bOverridePowerLevel = false;
    this->bOverrideRarity = false;
    this->bApplyRarityPowerLevel = true;
    this->bApplyDifficultyPowerLevel = true;
    this->bLimitPowerLevelByRarity = true;
    this->bUseWeaponSlotSafeGuard = true;
    this->bUseWeaponFamilySafeGuard = true;
    this->WeaponSlotSafeGuardModifier = 1;
    this->WeaponFamilySafeGuardModifier = 1;
    this->PreferredMultiplier = 1;
    this->HighestPowerLevelMultiplier = 1;
    this->LowestPowerLevelMultiplier = 1;
    this->BonusPartsDropChance = 1;
}


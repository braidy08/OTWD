#include "SBZMissionReward.h"

bool USBZMissionReward::HasExplicitRarity() const {
    return false;
}

ESBZWeaponRarity USBZMissionReward::GetRarity(const USBZProfileSaveData* ProfileSaveData, ESBZDifficulty Difficulty) const {
    return ESBZWeaponRarity::Ordinary;
}

void USBZMissionReward::GetPotentialRarityRange(const USBZProfileSaveData* ProfileSaveData, ESBZDifficulty Difficulty, ESBZWeaponRarity& OutLowestPotentialReward, ESBZWeaponRarity& OutHighestPotentialReward) const {
}

ESBZWeaponRarity USBZMissionReward::GetHighestPotentialRarity() const {
    return ESBZWeaponRarity::Ordinary;
}

USBZMissionReward::USBZMissionReward() {
}


#include "OTWDLootRewardStatics.h"

TArray<float> UOTWDLootRewardStatics::GetRarityWeightsFromPlayer(const UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, ESBZDifficulty Difficulty) {
    return TArray<float>();
}

ESBZWeaponRarity UOTWDLootRewardStatics::GetLowestGeneratableRarity(const UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, ESBZDifficulty Difficulty, const TArray<float>& OverrideWeights) {
    return ESBZWeaponRarity::Ordinary;
}

ESBZWeaponRarity UOTWDLootRewardStatics::GenerateRarity(FRandomStream& InRandomStream, const UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, ESBZDifficulty Difficulty, const TArray<float>& OverrideWeights) {
    return ESBZWeaponRarity::Ordinary;
}

int32 UOTWDLootRewardStatics::GeneratePowerLevel(FRandomStream& InRandomStream, UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, float BasePowerLevel, ESBZWeaponRarity Rarity, ESBZDifficulty Difficulty, bool bApplyRarityPowerLevel, bool bApplyDifficultyPowerLevel, bool bLimitPowerLevelByRarity) {
    return 0;
}

TArray<USBZWeaponPartSlot*> UOTWDLootRewardStatics::GenerateModdableSlots(FRandomStream& InRandomStream, const USBZWeaponData* WeaponData, int32 MinModdableSlots, int32 MaxModdableSlots, ESBZWeaponRarity Rarity, const TMap<USBZWeaponPartSlot*, float>& WeaponPartSlotWeights) {
    return TArray<USBZWeaponPartSlot*>();
}

UOTWDLootRewardStatics::UOTWDLootRewardStatics() {
}


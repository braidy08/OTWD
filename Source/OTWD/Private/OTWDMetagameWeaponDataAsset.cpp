#include "OTWDMetagameWeaponDataAsset.h"

void UOTWDMetagameWeaponDataAsset::ParseDataTables() {
}

UOTWDMetagameWeaponDataAsset::UOTWDMetagameWeaponDataAsset() {
    this->WeaponMetaDataByRarity = NULL;
    this->WeaponMetaDataByFamily = NULL;
    this->WeaponMetaDataByDifficulty = NULL;
    this->WeaponMetaDataByLevel = NULL;
    this->MaxAmountInVault = 0;
    this->MaxAmountInPostmaster = 0;
    this->MaxWeaponPowerLevel = 0;
}


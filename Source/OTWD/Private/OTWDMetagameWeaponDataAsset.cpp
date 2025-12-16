#include "OTWDMetagameWeaponDataAsset.h"

UOTWDMetagameWeaponDataAsset::UOTWDMetagameWeaponDataAsset() {
    this->WeaponMetaDataByRarity = NULL;
    this->WeaponMetaDataByFamily = NULL;
    this->WeaponMetaDataByDifficulty = NULL;
    this->WeaponMetaDataByLevel = NULL;
    this->MaxAmountInVault = 0;
    this->MaxAmountInPostmaster = 0;
    this->MaxWeaponPowerLevel = 0;
}

void UOTWDMetagameWeaponDataAsset::ParseDataTables() {
}



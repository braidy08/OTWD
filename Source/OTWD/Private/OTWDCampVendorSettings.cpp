#include "OTWDCampVendorSettings.h"

UOTWDCampVendorSettings::UOTWDCampVendorSettings() {
    this->BlackmarketStartRarity = ESBZWeaponRarity::Ordinary;
    this->BlackmarketRarityCap = ESBZWeaponRarity::Ordinary;
    this->BlackmarketWeaponProgressAmount[0] = 1;
    this->BlackmarketWeaponProgressAmount[1] = 1;
    this->BlackmarketWeaponProgressAmount[2] = 1;
    this->BlackmarketWeaponProgressAmount[3] = 1;
    this->BlackmarketWeaponProgressAmount[4] = 1;
    this->BlackmarketWeaponProgressAmount[5] = 1;
    this->BlackmarketWeaponProgressAmount[6] = 1;
    this->BlackmarkeGoldProgressAmount = 1;
    this->BlackmarkeMetaTurnsUntilItemsCollectable = 0;
    this->CachedVendorDataAsset = NULL;
}


#include "OTWDBlackmarketRarityChance.h"

FOTWDBlackmarketRarityChance::FOTWDBlackmarketRarityChance() {
    this->bHaveGuaranteedRarity = false;
    this->GuaranteedRarity = ESBZWeaponRarity::Ordinary;
    this->GuaranteedPowerLevel = 0;
    this->SuccessChance = 1;
    this->PossibleRarity = ESBZWeaponRarity::Ordinary;
    this->PossiblePowerLevel = 0;
}


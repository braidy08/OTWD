#include "SBZWeaponConfiguration.h"

FSBZWeaponConfiguration::FSBZWeaponConfiguration() {
    this->WeaponClass = NULL;
    this->WeaponData = NULL;
    this->MaterialReplacements = NULL;
    this->Rarity = ESBZWeaponRarity::Ordinary;
    this->Condition = ESBZWeaponCondition::BattleWorn;
    this->PowerLevel = 0;
}


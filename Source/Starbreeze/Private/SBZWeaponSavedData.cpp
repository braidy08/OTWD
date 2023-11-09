#include "SBZWeaponSavedData.h"

FSBZWeaponSavedData::FSBZWeaponSavedData() {
    this->WeaponData = NULL;
    this->Rarity = ESBZWeaponRarity::Ordinary;
    this->Condition = ESBZWeaponCondition::BattleWorn;
    this->PowerLevel = 0;
}


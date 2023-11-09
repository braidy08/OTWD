#include "OTWDMetagameWeaponSettingsByRarity.h"

FOTWDMetagameWeaponSettingsByRarity::FOTWDMetagameWeaponSettingsByRarity() {
    this->BaseDurability[0] = 1;
    this->BaseDurability[1] = 1;
    this->BaseDurability[2] = 1;
    this->BaseDurability[3] = 1;
    this->RepairCost[0] = 0;
    this->RepairCost[1] = 0;
    this->RepairCost[2] = 0;
    this->RepairCost[3] = 0;
    this->WeaponPartPowerLevelBonus = 0;
    this->MaxBonusFromWeaponParts = 0;
    this->WeaponBasePowerLevel = 0;
    this->WeaponAdditionalPowerLevelMin = 0;
    this->WeaponAdditionalPowerLevelMax = 0;
    this->WeaponMinPowerLevel = 0;
    this->WeaponMaxPowerLevel = 0;
}


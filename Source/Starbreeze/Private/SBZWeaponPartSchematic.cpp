#include "SBZWeaponPartSchematic.h"

USBZWeaponPartSchematic::USBZWeaponPartSchematic() {
    this->SlotType = NULL;
    this->bOverrideWeaponRarity = false;
    this->DefaultRarity = ESBZWeaponRarity::Ordinary;
    this->WeaponPartStatsEffect = NULL;
    this->StatsSchematic = NULL;
    this->MaterialParametersSchematic = NULL;
    this->bIsSlavePart = false;
}

void USBZWeaponPartSchematic::GenerateUIStats() {
}

void USBZWeaponPartSchematic::GenerateCompatibility() {
}

TMap<FName, float> USBZWeaponPartSchematic::EvalUIData(ESBZWeaponRarity Rarity) {
    return TMap<FName, float>();
}



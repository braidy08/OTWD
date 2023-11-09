#include "SBZWeaponConfigurationBlueprintLibrary.h"

FText USBZWeaponConfigurationBlueprintLibrary::UIStatToDisplayName(FName StatName) {
    return FText::GetEmpty();
}

FText USBZWeaponConfigurationBlueprintLibrary::RarityToDisplayName(ESBZWeaponRarity Rarity) {
    return FText::GetEmpty();
}

TMap<FName, float> USBZWeaponConfigurationBlueprintLibrary::GetWeaponPartUIStats(USBZWeaponPartSchematic* WeaponPartData, ESBZWeaponRarity Rarity) {
    return TMap<FName, float>();
}

TMap<FName, float> USBZWeaponConfigurationBlueprintLibrary::GetRangedWeaponUIStats(const UObject* WorldContextObject, USBZWeaponData* WeaponData, int32 PowerLevel, const TArray<FSBZAssignedWeaponPartSlot>& AssignedWeaponParts) {
    return TMap<FName, float>();
}

TMap<FName, float> USBZWeaponConfigurationBlueprintLibrary::GetMeleeWeaponUIStats(const UObject* WorldContextObject, USBZWeaponData* WeaponData, int32 PowerLevel, const TArray<FSBZAssignedWeaponPartSlot>& AssignedWeaponParts) {
    return TMap<FName, float>();
}

FText USBZWeaponConfigurationBlueprintLibrary::GetLoudnessDisplayName(float StatValue) {
    return FText::GetEmpty();
}

FText USBZWeaponConfigurationBlueprintLibrary::GetFireModeDisplayNameByValue(float FireModeValue) {
    return FText::GetEmpty();
}

FText USBZWeaponConfigurationBlueprintLibrary::GetFireModeDisplayName(ESBZWeaponBarrelFireMode FireMode) {
    return FText::GetEmpty();
}

FText USBZWeaponConfigurationBlueprintLibrary::FamilyToDisplayName(ESBZWeaponFamily Family) {
    return FText::GetEmpty();
}

FText USBZWeaponConfigurationBlueprintLibrary::ConditionToDisplayName(ESBZWeaponCondition Condition) {
    return FText::GetEmpty();
}

USBZWeaponConfigurationBlueprintLibrary::USBZWeaponConfigurationBlueprintLibrary() {
}


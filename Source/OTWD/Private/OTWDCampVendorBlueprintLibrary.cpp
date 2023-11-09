#include "OTWDCampVendorBlueprintLibrary.h"

bool UOTWDCampVendorBlueprintLibrary::IsBlackmarketItemProgressComplete(const UObject* WorldContextObject, int32 InventoryIndex) {
    return false;
}

bool UOTWDCampVendorBlueprintLibrary::GetWeaponPartBuyCost(const FOTWDWeaponPartSavedData& WeaponPartSavedData, FOTWDMetagameCurrency& OutBuyCost, const UObject* WorldContextObject) {
    return false;
}

bool UOTWDCampVendorBlueprintLibrary::GetWeaponBuyCost(const FOTWDWeaponSavedData& WeaponSavedData, FOTWDMetagameCurrency& OutBuyCost, const UObject* WorldContextObject) {
    return false;
}

void UOTWDCampVendorBlueprintLibrary::GetVendorInventory(const UObject* WorldContextObject, TArray<FOTWDWeaponSavedData>& OutWeapons, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts) {
}

bool UOTWDCampVendorBlueprintLibrary::GetDonateWeaponProgressResult(const UObject* WorldContextObject, int32 InventoryIndex, FGuid WeaponGuid, FOTWDBlackmarketProgressUiData& OutProgressData, float& OutOverflowFraction) {
    return false;
}

bool UOTWDCampVendorBlueprintLibrary::GetDonateGoldProgressResult(const UObject* WorldContextObject, int32 InventoryIndex, int32 Gold, FOTWDBlackmarketProgressUiData& OutProgressData, float& OutOverflowFraction) {
    return false;
}

bool UOTWDCampVendorBlueprintLibrary::GetCurrentBlackmarketItemProgress(const UObject* WorldContextObject, int32 InventoryIndex, FOTWDBlackmarketProgressUiData& OutProgressData) {
    return false;
}

ESBZWeaponRarity UOTWDCampVendorBlueprintLibrary::GetBlackmarketStartRarity() {
    return ESBZWeaponRarity::Ordinary;
}

ESBZWeaponRarity UOTWDCampVendorBlueprintLibrary::GetBlackmarketRarityCap() {
    return ESBZWeaponRarity::Ordinary;
}

float UOTWDCampVendorBlueprintLibrary::GetBlackmarketItemSavedData(const UObject* WorldContextObject, int32 InventoryIndex, EOTWDVendorItemSwitch& OutputExec, TArray<FOTWDWeaponSavedData>& OutWeapons, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts) {
    return 0.0f;
}

void UOTWDCampVendorBlueprintLibrary::GetBlackmarketItemSaveDataAtProgress(const UObject* WorldContextObject, int32 InventoryIndex, ESBZWeaponRarity Rarity, float ProgressPercent, EOTWDVendorItemSwitch& OutputExec, TArray<FOTWDWeaponSavedData>& OutWeapons, TArray<FOTWDWeaponPartSavedData>& OutWeaponParts) {
}

int32 UOTWDCampVendorBlueprintLibrary::CalculateGoldRequiredForProgress(const UObject* WorldContextObject, int32 InventoryIndex, ESBZWeaponRarity TargetRarity, float TargetProgress) {
    return 0;
}

bool UOTWDCampVendorBlueprintLibrary::BuyWeaponPart(const UObject* WorldContextObject, const FOTWDWeaponPartSavedData& WeaponPartSavedData) {
    return false;
}

bool UOTWDCampVendorBlueprintLibrary::BuyWeapon(const UObject* WorldContextObject, const FOTWDWeaponSavedData& WeaponSavedData) {
    return false;
}

UOTWDCampVendorBlueprintLibrary::UOTWDCampVendorBlueprintLibrary() {
}


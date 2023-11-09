#include "SBZProfileSaveData.h"

bool USBZProfileSaveData::SetActivePawnSavedDataGuid(const FGuid& SavedDataGuid) {
    return false;
}

FGuid USBZProfileSaveData::RetrieveWeaponAssignedToPawnAtSlot(const FGuid& PawnSavedDataGuid, int32 WeaponSlotIndex) const {
    return FGuid{};
}

USBZUnlockableMetadata* USBZProfileSaveData::RetrieveCosmeticMetadataAssignedToPawnAtSlot(const FGuid& PawnSavedDataGuid, int32 CosmeticSlotIndex) const {
    return NULL;
}

USBZGameplayAbilityData* USBZProfileSaveData::RetrieveAbilityAssignedToPawnAtSlot(const FGuid& PawnSavedDataGuid, int32 AbilitySlotIndex) const {
    return NULL;
}

bool USBZProfileSaveData::RemoveWeaponSavedData(const FGuid& SavedDataGuid, bool bValidate) {
    return false;
}

bool USBZProfileSaveData::RemoveWeaponPartSavedData(const FGuid& SavedDataGuid, bool bValidate) {
    return false;
}

bool USBZProfileSaveData::RemovePawnSavedData(const FGuid& SavedDataGuid, bool bValidate) {
    return false;
}

FGuid USBZProfileSaveData::GetActivePawnSavedDataGuid() const {
    return FGuid{};
}

bool USBZProfileSaveData::DoesWeaponSavedDataExist(const FGuid& SavedDataGuid) const {
    return false;
}

bool USBZProfileSaveData::DoesWeaponPartSavedDataExist(const FGuid& SavedDataGuid) const {
    return false;
}

bool USBZProfileSaveData::DoesPawnSavedDataExist(const FGuid& SavedDataGuid) const {
    return false;
}

FSBZWeaponConfiguration USBZProfileSaveData::CreateWeaponConfigurationFromWeaponSavedData(const FSBZWeaponSavedData& WeaponSavedData, bool bIncludeSoftAssets, bool bIncludeWeaponData) const {
    return FSBZWeaponConfiguration{};
}

bool USBZProfileSaveData::CanModifyWeaponSavedData(const FGuid& SavedDataGuid) const {
    return false;
}

bool USBZProfileSaveData::AssignWeaponToPawnAtSlot(const FGuid& PawnSavedDataGuid, const FGuid& WeaponSavedDataGuid, int32 WeaponSlotIndex) {
    return false;
}

bool USBZProfileSaveData::AssignCosmeticMetadataToPawnAtSlot(const FGuid& PawnSavedDataGuid, USBZUnlockableMetadata* CosmeticMetadata, int32 CosmeticSlotIndex) {
    return false;
}

bool USBZProfileSaveData::AssignAbilityToPawnAtSlot(const FGuid& PawnSavedDataGuid, USBZGameplayAbilityData* AbilityData, int32 AbilitySlotIndex) {
    return false;
}

USBZProfileSaveData::USBZProfileSaveData() {
}


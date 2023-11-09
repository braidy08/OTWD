#include "SBZCharacterSchematic.h"

USBZGameplayAbilityData* USBZCharacterSchematic::GetPawnGameplayAbilityDataForSlot(int32 Slot) const {
    return NULL;
}

USBZUnlockableMetadataCollection* USBZCharacterSchematic::GetPawnCosmeticCollectionForSlot(int32 Slot) const {
    return NULL;
}

FSBZWeaponSavedData USBZCharacterSchematic::GetDefaultWeaponSavedDataForSlot(int32 Slot) const {
    return FSBZWeaponSavedData{};
}

USBZCharacterSchematic::USBZCharacterSchematic() {
    this->TechCollection = NULL;
}


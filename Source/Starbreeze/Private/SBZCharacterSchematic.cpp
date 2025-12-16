#include "SBZCharacterSchematic.h"

USBZCharacterSchematic::USBZCharacterSchematic() {
    this->TechCollection = NULL;
}

USBZGameplayAbilityData* USBZCharacterSchematic::GetPawnGameplayAbilityDataForSlot(int32 Slot) const {
    return NULL;
}

USBZUnlockableMetadataCollection* USBZCharacterSchematic::GetPawnCosmeticCollectionForSlot(int32 Slot) const {
    return NULL;
}

FSBZWeaponSavedData USBZCharacterSchematic::GetDefaultWeaponSavedDataForSlot(int32 Slot) const {
    return FSBZWeaponSavedData{};
}



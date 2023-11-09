#include "SBZWeaponModdingSession.h"

FGuid USBZWeaponModdingSession::RetrievePartInSlot(const USBZWeaponPartSlot* Slot) const {
    return FGuid{};
}

bool USBZWeaponModdingSession::HaveWeaponPartsChanged() const {
    return false;
}

TArray<USBZWeaponPartSlot*> USBZWeaponModdingSession::GetPartSlotsForWeapon() const {
    return TArray<USBZWeaponPartSlot*>();
}

TArray<FGuid> USBZWeaponModdingSession::GetAvailablePartsForSlot(USBZWeaponPartSlot* Slot, bool bIncludeAssignedParts) const {
    return TArray<FGuid>();
}

FSBZWeaponConfiguration USBZWeaponModdingSession::CreateWeaponConfiguration() const {
    return FSBZWeaponConfiguration{};
}

bool USBZWeaponModdingSession::AssignPartToSlot(const USBZWeaponPartSlot* Slot, const FGuid& SavedDataGuid, FGuid& OutDetachedSavedDataGuid) {
    return false;
}

bool USBZWeaponModdingSession::ApplyModifications(USBZProfileSaveData* ProfileSaveData) {
    return false;
}

USBZWeaponModdingSession::USBZWeaponModdingSession() {
    this->DuplicateProfileSaveData = NULL;
    this->WorldContextObject = NULL;
}


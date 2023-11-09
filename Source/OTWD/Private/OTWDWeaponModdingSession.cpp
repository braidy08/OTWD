#include "OTWDWeaponModdingSession.h"

bool UOTWDWeaponModdingSession::RepairWeapon() {
    return false;
}

FOTWDWeaponSavedData UOTWDWeaponModdingSession::GetSessionWeaponSavedData() const {
    return FOTWDWeaponSavedData{};
}

FOTWDWeaponPartSavedData UOTWDWeaponModdingSession::GetSessionWeaponPartSavedData(const FGuid& SavedDataGuid) const {
    return FOTWDWeaponPartSavedData{};
}

TArray<FGuid> UOTWDWeaponModdingSession::GetSessionWeaponParts(FGuid OptionalNewPartSavedDataGuid, const USBZWeaponPartSlot* OptionalNewPartSlot) const {
    return TArray<FGuid>();
}

UOTWDProfileSaveData* UOTWDWeaponModdingSession::GetSessionProfileSavedData() const {
    return NULL;
}

bool UOTWDWeaponModdingSession::GetSessionCost(FOTWDMetagameCurrency& OutModdingCost) const {
    return false;
}

UOTWDWeaponModdingSession::UOTWDWeaponModdingSession() {
}


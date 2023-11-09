#include "SBZWeaponData.h"

void USBZWeaponData::RefreshDataFromBlueprint() const {
}

USBZWeaponPartSlot* USBZWeaponData::GetSlotMatchingWeaponPart(USBZWeaponPartSchematic* WeaponPartSchematic) const {
    return NULL;
}

TArray<USBZWeaponPartSlot*> USBZWeaponData::GetModdableSlots() const {
    return TArray<USBZWeaponPartSlot*>();
}

void USBZWeaponData::GenerateUIData() const {
}

TArray<FSBZWeaponAttributeUIStatSingle> USBZWeaponData::EvalUIData(int32 PowerLevel) const {
    return TArray<FSBZWeaponAttributeUIStatSingle>();
}

bool USBZWeaponData::CanBeAssignedToSlot(int32 Slot) const {
    return false;
}

USBZWeaponData::USBZWeaponData() {
    this->Manufacturer = NULL;
    this->Family = ESBZWeaponFamily::None;
    this->RestrictedWeaponSlot = 0;
    this->PowerRangeMaximum0 = 0;
}


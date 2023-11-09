#include "SBZWeaponSchematic.h"

USBZWeaponSchematic::USBZWeaponSchematic() {
    this->WeaponSlot = ESBZWeaponSlotType::Primary;
    this->bUseStaticMesh = false;
    this->MaterialParametersSchematic = NULL;
    this->EquipEvent = NULL;
    this->UnequipEvent = NULL;
    this->JamEvent = NULL;
    this->EmptyEvent = NULL;
}


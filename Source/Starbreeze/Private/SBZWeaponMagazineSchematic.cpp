#include "SBZWeaponMagazineSchematic.h"

FSBZWeaponMagazineSchematic::FSBZWeaponMagazineSchematic() {
    this->ReloadMode = ESBZWeaponMagazineReloadMode::Full;
    this->ReloadSpeed = 1;
    this->AmmoLoadedPerReload = 0;
    this->AmmoInventoryInitial = 0;
    this->AmmoInventoryMax = 0;
    this->AmmoLoadedInitial = 0;
    this->AmmoLoadedMax = 0;
}


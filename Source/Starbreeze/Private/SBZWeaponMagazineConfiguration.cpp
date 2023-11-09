#include "SBZWeaponMagazineConfiguration.h"

FSBZWeaponMagazineConfiguration::FSBZWeaponMagazineConfiguration() {
    this->AmmoPerReload = 0;
    this->AmmoInBarrel = 0;
    this->ReloadMode = ESBZWeaponMagazineReloadMode::Full;
    this->bAutoReloadWhenEmpty = false;
}


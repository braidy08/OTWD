#include "SBZWeaponMagazine.h"

FSBZWeaponMagazine::FSBZWeaponMagazine() {
    this->State = ESBZWeaponMagazineState::Idle;
    this->TimesContinuouslyReloaded = 0;
    this->ReloadTimeElapsed = 1;
    this->ReloadTimeNormal = 1;
    this->ReloadTimeEmpty = 1;
    this->ReloadTimeEnterLoop = 1;
    this->ReloadTimeLoop = 1;
    this->ReloadRecoveryTimeNormal = 1;
    this->ReloadRecoveryTimeEmpty = 1;
    this->ReloadRecoveryTimeLoop = 1;
    this->ReloadAmmoLoadedRemainder = 1;
    this->AmmoLoaded = 0;
    this->AmmoLoadedAuthority = 0;
    this->AmmoLoadedOnLastIncrease = 0;
    this->AmmoInventory = 0;
    this->AmmoInventoryAuthority = 0;
}


#include "SBZWeaponBarrel.h"

FSBZWeaponBarrel::FSBZWeaponBarrel() {
    this->State = EWeaponBarrelState::Idle;
    this->FireCooldownTime = 1;
    this->RecoveryTime = 1;
    this->BarrelFireEffect = NULL;
    this->TimesContinuouslyFired = 0;
    this->bAutoFireEventStarted = false;
    this->bStopFireWanted = false;
}


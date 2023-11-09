#include "SBZWeaponKick.h"

FSBZWeaponKick::FSBZWeaponKick() {
    this->bAnimationBasedGunKickAimOffset = false;
    this->GunKickAdsLocationMultiplierYaw = 1;
    this->GunKickAdsLocationMultiplierPitch = 1;
    this->MaximumPitch = 1;
    this->MaximumYaw = 1;
    this->SpeedDeflect = 1;
    this->SpeedRecover = 1;
    this->SpringDamping = 1;
    this->ReducedKickBullets = 0;
    this->ReducedKickMultiplier = 1;
    this->bUseCodeBasedGunKickBack = false;
}


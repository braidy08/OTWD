#include "SBZProjectileSchematic.h"

USBZProjectileSchematic::USBZProjectileSchematic() {
    this->NearDamageMultiplier = 1;
    this->FarDamageMultiplier = 1;
    this->NearFalloffStartMultiplier = 1;
    this->FarFalloffEndMultiplier = 1;
    this->DodgeChance = 1;
    this->DamageType = NULL;
    this->TravelDistanceMax = 1;
    this->FriendlyFireAction = EFriendlyFireAction::TreatAsDefault;
    this->FriendlyFireMultiplier = 1;
    this->ThrowableProjectileClass = NULL;
    this->ThrowableProjectileSchematic = NULL;
}


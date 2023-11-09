#include "SBZMeleeWeaponData.h"

FSBZMeleeWeaponData::FSBZMeleeWeaponData() {
    this->ShoveRange = 1;
    this->ShoveVelocity = 1;
    this->ShoveVelocityFalloffCurve = NULL;
    this->ShoveRecoveryDuration = 1;
    this->ShoveArcAngle = 1;
    this->ShoveStaminaUse = 1;
    this->HeavyStaminaUse = 1;
    this->LightStaminaUse = 1;
    this->HeavyNoiseRange = 1;
    this->LightNoiseRange = 1;
    this->HeavyDamageType = NULL;
    this->LightDamageType = NULL;
    this->HeavyDamageAmount = 1;
    this->LightDamageAmount = 1;
}


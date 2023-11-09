#include "SBZMeleeAttackData.h"

FSBZMeleeAttackData::FSBZMeleeAttackData() {
    this->bOverrideWindupDuration = false;
    this->WindupDuration = 1;
    this->bOverrideSwingDuration = false;
    this->SwingDuration = 1;
    this->MaxTargetCount = 0;
    this->SecondaryTargetDamageMultiplier = 1;
    this->HitboxViewRotation = 1;
}


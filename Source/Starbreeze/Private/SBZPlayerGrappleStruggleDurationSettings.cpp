#include "SBZPlayerGrappleStruggleDurationSettings.h"

FSBZPlayerGrappleStruggleDurationSettings::FSBZPlayerGrappleStruggleDurationSettings() {
    this->bTimeBasedStruggle = false;
    this->MinimumDefeatTime = 1;
    this->MaximumDefeatTime = 1;
    this->bHealthBasedStruggle = false;
    this->InitialDamage = 1;
    this->HealthLossTickInterval = 1;
    this->HealthLossBaseDamage = 1;
    this->HealthLossAdditionalDamage = 1;
    this->HealthLossGrowthRate = 1;
    this->bTickHealthLossOnBegin = false;
}


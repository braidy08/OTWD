#include "SBZPlayerGrappleAdditionalAttackerSettings.h"

FSBZPlayerGrappleAdditionalAttackerSettings::FSBZPlayerGrappleAdditionalAttackerSettings() {
    this->bFailImmediatelyWithAdd = false;
    this->FailTimeAfterLookAt = 1;
    this->bPauseDamageDuringLookAt = false;
    this->MinimumTimeUntilDamageTickAfterResumed = 1;
    this->bBlockStruggleInputDuringLookAt = false;
    this->bQueueShoveDuringLookAt = false;
}


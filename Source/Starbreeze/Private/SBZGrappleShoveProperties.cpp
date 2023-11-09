#include "SBZGrappleShoveProperties.h"

FSBZGrappleShoveProperties::FSBZGrappleShoveProperties() {
    this->bAutoShove = false;
    this->bDoShoveImmediately = false;
    this->bDoPenaltyImmediately = false;
    this->Pitch = 1;
    this->ForceMultiplier = 1;
    this->bOverrideDofBlendOutOnShove = false;
    this->bOverrideDofBlendOutOnPenalty = false;
}


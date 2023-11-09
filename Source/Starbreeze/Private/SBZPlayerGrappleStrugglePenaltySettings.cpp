#include "SBZPlayerGrappleStrugglePenaltySettings.h"

FSBZPlayerGrappleStrugglePenaltySettings::FSBZPlayerGrappleStrugglePenaltySettings() {
    this->bPenaltyEnabled = false;
    this->RandomShoveAngleDegree = 1;
    this->ShoveForce = 1;
    this->ShoveRecoveryDuration = 1;
    this->GrappleImmunityDuration = 1;
    this->bPushAttackerRagdoll = false;
    this->PushAttackerPitch = 1;
    this->PushAttackerForceMultiplier = 1;
}


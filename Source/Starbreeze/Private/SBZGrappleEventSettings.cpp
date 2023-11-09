#include "SBZGrappleEventSettings.h"

FSBZGrappleEventSettings::FSBZGrappleEventSettings() {
    this->PredeterminedWinner = ESBZGrappleParticipantType::None;
    this->bSingleAnimation = false;
    this->bAddsJoinEndStage = false;
    this->bKillVictimOnLose = false;
    this->bKillAttackerOnLose = false;
    this->GrapplyImmunityDuration = 1;
    this->RandomSeed = 0;
}


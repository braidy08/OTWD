#include "SBZGrappleEventStateProperties.h"

FSBZGrappleEventStateProperties::FSBZGrappleEventStateProperties() {
    this->AttackerActor = NULL;
    this->VictimActor = NULL;
    this->WinnerType = ESBZGrappleParticipantType::None;
    this->WinnerActor = NULL;
    this->bAttackerWillDie = false;
    this->bVictimWillDie = false;
    this->NumberOfAttackers = 0;
    this->bForcedEnd = false;
    this->bAddsJoinEndStage = false;
}


#include "SBZDoorAction.h"

FSBZDoorAction::FSBZDoorAction() {
    this->ActionType = ESBZDoorActionType::None;
    this->TargetState = ESBZDoorStateType::NonTraversable;
    this->InteractionDuration = 1;
    this->bMoveNavObstacle = false;
    this->PlaybackSpeed = 1;
    this->bDisableInteractionDuringAction = false;
    this->MaxInteractors = 0;
    this->ShovingForce = 1;
    this->ShovingStunDuration = 1;
    this->bOverrideCanBeAttackedDuringInteraction = false;
    this->bCanBeAttackedDuringInteraction = false;
    this->bOverrideCanBeAttackedDuringAction = false;
    this->bCanBeAttackedDuringAction = false;
}


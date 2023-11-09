#include "SBZDoorState.h"

FSBZDoorState::FSBZDoorState() {
    this->StateType = ESBZDoorStateType::NonTraversable;
    this->bIsInteractionEnabled = false;
    this->bCanTakeDamages = false;
    this->bCanBeBarricaded = false;
    this->bVisible = false;
    this->bDoorFrameVisible = false;
    this->bCollide = false;
    this->bDoorFrameCollide = false;
}


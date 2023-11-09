#include "ClimbTrajectory.h"

FClimbTrajectory::FClimbTrajectory() {
    this->ClimbType = EClimbType::CS_VAULTING;
    this->Schematic = NULL;
    this->bEndsInCrouchState = false;
    this->bIsValid = false;
    this->bEndReached = false;
    this->SurfaceType = SurfaceType_Default;
    this->CharacterSpeed = 1;
}


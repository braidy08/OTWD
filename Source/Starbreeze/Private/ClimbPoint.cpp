#include "ClimbPoint.h"

FClimbPoint::FClimbPoint() {
    this->ClimbStep = EClimbStep::CS_JumpStep;
    this->bIsColliding = false;
    this->Radius = 1;
    this->Height = 1;
}


#include "BTTask_TryGrapple.h"

UBTTask_TryGrapple::UBTTask_TryGrapple() {
    this->Target = NULL;
    this->ZombiePawn = NULL;
    this->Timer = 1;
    this->MaxTime = 1;
    this->WaitTime = 1;
    this->Deviation = 1;
    this->DistanceThreshold = 1;
    this->bMoveTooFar = false;
}


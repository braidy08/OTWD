#include "BTTask_WaitMove.h"

UBTTask_WaitMove::UBTTask_WaitMove() {
    this->Target = NULL;
    this->Timer = 1;
    this->MaxTime = 1;
    this->WaitTime = 1;
    this->Deviation = 1;
    this->DistanceThreshold = 1;
    this->bMoveTooFar = false;
}


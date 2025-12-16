#include "BTTask_DumbMoveTo.h"

UBTTask_DumbMoveTo::UBTTask_DumbMoveTo() {
    this->NodeName = TEXT("Dumb Move To");
    this->AcceptableRadius = 1;
    this->bUseRVOAvoidance = false;
    this->bUseDetourCrowdAvoidance = false;
}



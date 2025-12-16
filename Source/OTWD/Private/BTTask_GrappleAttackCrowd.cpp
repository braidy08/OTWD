#include "BTTask_GrappleAttackCrowd.h"

UBTTask_GrappleAttackCrowd::UBTTask_GrappleAttackCrowd() {
    this->NodeName = TEXT("Grapple attack crowd");
    this->OwningZombie = NULL;
    this->TargetActor = NULL;
    this->PreviousRequestTime = 1;
    this->bInitialised = false;
    this->GrappleManager = NULL;
}



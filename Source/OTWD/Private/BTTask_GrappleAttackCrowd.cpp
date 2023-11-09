#include "BTTask_GrappleAttackCrowd.h"

UBTTask_GrappleAttackCrowd::UBTTask_GrappleAttackCrowd() {
    this->OwningZombie = NULL;
    this->TargetActor = NULL;
    this->PreviousRequestTime = 1;
    this->bInitialised = false;
    this->GrappleManager = NULL;
}


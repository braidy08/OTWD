#include "BTTask_GrappleAttack.h"

UBTTask_GrappleAttack::UBTTask_GrappleAttack() {
    this->OwningZombie = NULL;
    this->TargetActor = NULL;
    this->bDirectPathToTarget = false;
    this->bTargetClimbing = false;
    this->PreviousRequestTime = 1;
    this->Controller = NULL;
    this->Pawn = NULL;
    this->bInitialised = false;
    this->GrappleManager = NULL;
}


#include "BTTask_Eat.h"

UBTTask_Eat::UBTTask_Eat() {
    this->Timer = 1;
    this->OwningZombie = NULL;
    this->ZombieController = NULL;
    this->bEndlessEating = false;
    this->LocalBlackboardComponent = NULL;
}


#include "MeleeHitBoxResult.h"

FMeleeHitBoxResult::FMeleeHitBoxResult() {
    this->MeleeAttack = NULL;
    this->AttackCategory = EMeleeAttackCategory::Heavy;
    this->DecalAngle = 0;
}


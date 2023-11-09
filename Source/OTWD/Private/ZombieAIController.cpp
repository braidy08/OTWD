#include "ZombieAIController.h"

bool AZombieAIController::TryLungeDefaultSettings(ASBZCharacter* TargetCharacter) {
    return false;
}

bool AZombieAIController::TryLunge(ASBZCharacter* TargetCharacter, float MaxDistance, float MaxAngle, float ShoveForce, float ShoveRecoveryTime, float TargetVelocityWeight, float SelfShoveForce, float SelfRecoveryTime) {
    return false;
}

void AZombieAIController::StopAwarness() {
}

void AZombieAIController::RestartAwarness() {
}

EDefaultBehaviour AZombieAIController::RandomizeDefaultBehaviour() {
    return EDefaultBehaviour::S_None;
}

float AZombieAIController::GetDefaultBehaviourWaitTime() {
    return 0.0f;
}

AZombieAIController::AZombieAIController() {
    this->bIsLurker = false;
    this->bIsCrowdZombie = false;
    this->bIsCrawler = false;
    this->BTNormalAsset = NULL;
    this->BTCrowdAsset = NULL;
    this->ZombieCharacter = NULL;
}


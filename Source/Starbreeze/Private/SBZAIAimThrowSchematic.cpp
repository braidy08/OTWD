#include "SBZAIAimThrowSchematic.h"

USBZAIAimThrowSchematic::USBZAIAimThrowSchematic() {
    this->AimType = EAimThrowType::AimAtTarget;
    this->PreferredThrowSpeed = 1;
    this->ThrowAngleSpeedMultiplier = NULL;
    this->bPreferLobbedThrow = false;
    this->ProjectileTraceOption = ESuggestProjVelocityTraceOption::DoNotTrace;
    this->ProjectileSizeForPrediction = 1;
    this->AllyClearDistance = 1;
    this->bPredictUsingTargetMovement = true;
    this->MovementPredictionTime = 1;
    this->bPredictLandingSpot = true;
    this->PredictionMaxTime = 1;
    this->PredictedLandingDistanceToTarget = 1;
}


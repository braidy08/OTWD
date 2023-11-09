#include "SBZHurtReactionPrediction.h"

FSBZHurtReactionPrediction::FSBZHurtReactionPrediction() {
    this->Type = ESBZHurtReactionType::None;
    this->Weight = ESBZHurtReactionWeight::Light;
    this->BoneIndex = 0;
    this->Duration = 0;
    this->Pose = ESBZHurtReactionPose::Standing;
    this->Yaw = 0;
    this->bIsAlive = false;
    this->bIsRunningForward = false;
    this->Direction = ESBZHurtReactionDirection::Forward;
    this->Index = 0;
}


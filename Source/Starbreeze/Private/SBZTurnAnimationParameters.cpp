#include "SBZTurnAnimationParameters.h"

FSBZTurnAnimationParameters::FSBZTurnAnimationParameters() {
    this->Type = ESBZTurnAnimationCommandType::ETypeStartTurn;
    this->StartAngle = 1;
    this->TurnAngle = 1;
    this->TurnSpeed = 1;
}


#include "SBZBreathingData.h"

FSBZBreathingData::FSBZBreathingData() {
    this->BreathingCurve = NULL;
    this->HorizontalMagnitude = 1;
    this->VerticalMagnitude = 1;
    this->CurveDuration = 1;
    this->CrouchMagnitudeMultiplier = 1;
    this->CrouchDurationSpeedMultiplier = 1;
    this->MovingMagnitudeMultiplier = 1;
    this->MovingDurationSpeedMultiplier = 1;
    this->CrouchMovingMagnitudeMultiplier = 1;
    this->CrouchMovingDurationSpeedMultiplier = 1;
    this->FollowSpeed = 1;
    this->MultiplierSpeed = 1;
}


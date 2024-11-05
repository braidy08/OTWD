#include "GamepadCursorSettings.h"

UGamepadCursorSettings::UGamepadCursorSettings() {
    this->MaxAnalogCursorSpeed = 1;
    this->MaxAnalogCursorSpeedWhenHovered = 1;
    this->AnalogCursorDragCoefficient = 1;
    this->AnalogCursorDragCoefficientWhenHovered = 1;
    this->MinAnalogCursorSpeed = 1;
    this->AnalogCursorDeadZone = 1;
    this->AnalogCursorAccelerationMultiplier = 1;
    this->AnalogCursorSize = 1;
    this->bUseEngineAnalogCursor = false;
    this->bAnalogCursorNoAcceleration = false;
}


#include "SBZAimAssistSchematic.h"

FSBZAimAssistSchematic::FSBZAimAssistSchematic() {
    this->DetectionDistancePriority = 1;
    this->DetectionSideDistance = 1;
    this->MinDistance = 1;
    this->MinTargetSelectionDuration = 1;
    this->EscapeSpeedIn = 1;
    this->EscapeSpeedOut = 1;
    this->AimAssistSpeed = 1;
    this->MinDuration = 1;
    this->MaxDuration = 1;
    this->bTriggeredByWeaponFire = false;
    this->StickyAimDurationOnWeaponFire = 1;
    this->SensitivityModifier = 1;
    this->BulletDeviationDistance = 1;
}


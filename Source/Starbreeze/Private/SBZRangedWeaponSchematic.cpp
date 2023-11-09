#include "SBZRangedWeaponSchematic.h"

USBZRangedWeaponSchematic::USBZRangedWeaponSchematic() {
    this->ChanceToNotKillZombiesOnFirstHit = 1;
    this->AimAssistRegular = NULL;
    this->AimAssistADS = NULL;
    this->TargetingTransitionTime = 1;
    this->CameraOffsetADSDistance = 1;
    this->TargetingBoneName = TEXT("L_Sight");
    this->NormalMagnification = 1;
    this->TargetingMagnification = 1;
    this->EnterTargetingEvent = NULL;
    this->ExitTargetingEvent = NULL;
}


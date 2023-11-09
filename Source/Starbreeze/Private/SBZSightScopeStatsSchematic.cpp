#include "SBZSightScopeStatsSchematic.h"

USBZSightScopeStatsSchematic::USBZSightScopeStatsSchematic() {
    this->TargetingMagnification = 1;
    this->TargetingOnTopMagnification = 1;
    this->TargetingOffsetDistance = 1;
    this->bTargetingHideWeapon = false;
    this->bChangeHud = false;
    this->TargetingProgressTrigger = 1;
    this->TargetingMouseInputModifier = 1;
    this->TargetingGamepadInputModifier = 1;
    this->bIsRecoilReloadActionIgnored = false;
    this->bUseDOFSettings = false;
}


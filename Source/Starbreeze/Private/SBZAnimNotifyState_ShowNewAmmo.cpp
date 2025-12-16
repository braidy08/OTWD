#include "SBZAnimNotifyState_ShowNewAmmo.h"

USBZAnimNotifyState_ShowNewAmmo::USBZAnimNotifyState_ShowNewAmmo() {
    this->bIsReloadedAtEnd = false;
    this->bIsLastSlotUsed = false;
    this->bSnapMagazineRotationAtStart = false;
    this->SnapMagazineRotationOffsetAtStart = 0;
    this->bSnapMagazineRotationAtEnd = false;
    this->SnapMagazineRotationOffsetAtEnd = 0;
}



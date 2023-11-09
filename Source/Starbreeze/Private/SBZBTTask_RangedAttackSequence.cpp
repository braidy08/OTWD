#include "SBZBTTask_RangedAttackSequence.h"

USBZBTTask_RangedAttackSequence::USBZBTTask_RangedAttackSequence() {
    this->bNoAiming = false;
    this->bAttackingFromCover = false;
    this->bAbortOnDamageTaken = false;
    this->bIsMoving = false;
    this->bRequestFireToken = true;
    this->bVerifyAim = true;
    this->bShootingFromCover = false;
    this->PeekType = ESBZShootingPointType::CrouchLeft;
    this->bOverridePeekType = false;
}


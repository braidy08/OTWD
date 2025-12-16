#include "SBZBlockingMeleeWeapon.h"

ASBZBlockingMeleeWeapon::ASBZBlockingMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlockingDamageTypeClass = NULL;
    this->BlockingViewAngle = 1;
    this->BlockingViewAngleDot = 1;
}



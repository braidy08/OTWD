#include "SBZBTDecorator_HasTakenDamage.h"

USBZBTDecorator_HasTakenDamage::USBZBTDecorator_HasTakenDamage() {
    this->NodeName = TEXT("Taken Damage");
    this->DamageThresholdTime = 1;
    this->bUseDamageThresholdTimeKey = false;
    this->DamageThreshold = 1;
    this->bCheckDamageFlagOnly = false;
}



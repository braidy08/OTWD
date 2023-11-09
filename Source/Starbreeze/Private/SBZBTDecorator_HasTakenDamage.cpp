#include "SBZBTDecorator_HasTakenDamage.h"

USBZBTDecorator_HasTakenDamage::USBZBTDecorator_HasTakenDamage() {
    this->DamageThresholdTime = 1;
    this->bUseDamageThresholdTimeKey = false;
    this->DamageThreshold = 1;
    this->bCheckDamageFlagOnly = false;
}


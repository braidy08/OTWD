#include "SBZGrappleDamageType.h"
#include "SBZDirectHealthDamageModifierEffect.h"

USBZGrappleDamageType::USBZGrappleDamageType() {
    this->GameplayEffectClass = USBZDirectHealthDamageModifierEffect::StaticClass();
}



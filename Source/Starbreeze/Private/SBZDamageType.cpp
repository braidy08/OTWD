#include "SBZDamageType.h"
#include "SBZDamageEffect.h"

USBZDamageType::USBZDamageType() {
    this->WeaponCaliber = EWeaponCaliber::Light;
    this->bIsExplosion = false;
    this->KnockBackChance = 1;
    this->KnockBackImpulse = 1;
    this->KnockBackDuration = 1;
    this->StunChance = 1;
    this->StunDuration = 1;
    this->LightHurtChance = 1;
    this->MediumHurtChance = 1;
    this->HeavyHurtChance = 1;
    this->WoundChance = 1;
    this->ArmorDamageMultiplier = 1;
    this->GameplayEffectClass = USBZDamageEffect::StaticClass();
    this->LocalPlayerFeedback = NULL;
    this->bAppliesDamage = true;
}


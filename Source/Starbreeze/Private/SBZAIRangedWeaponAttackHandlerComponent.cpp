#include "SBZAIRangedWeaponAttackHandlerComponent.h"

void USBZAIRangedWeaponAttackHandlerComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause) {
}

USBZAIRangedWeaponAttackHandlerComponent::USBZAIRangedWeaponAttackHandlerComponent() {
    this->Weapon = NULL;
    this->CombatManager = NULL;
}


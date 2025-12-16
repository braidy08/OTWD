#include "SBZAIRangedWeaponAttackHandlerComponent.h"

USBZAIRangedWeaponAttackHandlerComponent::USBZAIRangedWeaponAttackHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Weapon = NULL;
    this->CombatManager = NULL;
}

void USBZAIRangedWeaponAttackHandlerComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause) {
}



#include "SBZAIAggroSystemComponent.h"

USBZAIAggroSystemComponent::USBZAIAggroSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AIPerceptionComponent = NULL;
    this->AIOwnerCharacter = NULL;
    this->AIOwnerController = NULL;
    this->AlertnessComponent = NULL;
}

void USBZAIAggroSystemComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause) {
}

void USBZAIAggroSystemComponent::OnArmorHit(AActor* ArmorOwner, AActor* HitArmor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser) {
}

void USBZAIAggroSystemComponent::OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}



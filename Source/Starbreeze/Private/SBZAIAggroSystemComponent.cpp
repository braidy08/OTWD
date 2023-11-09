#include "SBZAIAggroSystemComponent.h"

void USBZAIAggroSystemComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause) {
}

void USBZAIAggroSystemComponent::OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}

USBZAIAggroSystemComponent::USBZAIAggroSystemComponent() {
    this->AIPerceptionComponent = NULL;
    this->AIOwnerCharacter = NULL;
    this->CurrentHighestTarget = NULL;
    this->AlertnessComponent = NULL;
    this->NewThreats = NULL;
}


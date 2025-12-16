#include "SBZDamageMemoryComponent.h"

USBZDamageMemoryComponent::USBZDamageMemoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bServerOnly = true;
    this->bLogDamageWithoutTimestamp = false;
}

void USBZDamageMemoryComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

float USBZDamageMemoryComponent::GetTotalDamageTaken() const {
    return 0.0f;
}

float USBZDamageMemoryComponent::GetDamageTakenInTheLastSeconds(const float Seconds) const {
    return 0.0f;
}



#include "SBZOnTakeDamageObjective.h"

USBZOnTakeDamageObjective::USBZOnTakeDamageObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumDamage = 1;
    this->TotalRequiredDamage = 1;
}

void USBZOnTakeDamageObjective::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}



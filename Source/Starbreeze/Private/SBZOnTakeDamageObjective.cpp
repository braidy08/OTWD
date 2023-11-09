#include "SBZOnTakeDamageObjective.h"

void USBZOnTakeDamageObjective::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

USBZOnTakeDamageObjective::USBZOnTakeDamageObjective() {
    this->MinimumDamage = 1;
    this->TotalRequiredDamage = 1;
}


#include "SBZExplodable.h"
#include "Templates/SubclassOf.h"

void ASBZExplodable::Explode(AController* ExplosionInstigator) {
}


void ASBZExplodable::ApplyDamage(float DamageAmount, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser) {
}

ASBZExplodable::ASBZExplodable() {
    this->Health = 1;
    this->Damage = 1;
    this->MinimumDamage = 1;
    this->DamageOuterRadius = 1;
    this->DamageInnerRadius = 1;
    this->DamageFalloff = 1;
    this->EmitterTemplate = NULL;
    this->DamageType = NULL;
    this->bDestroyOnExplosion = false;
}


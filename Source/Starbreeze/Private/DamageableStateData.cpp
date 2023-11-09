#include "DamageableStateData.h"

FDamageableStateData::FDamageableStateData() {
    this->bDead = false;
    this->Damage = 1;
    this->InstigatingController = NULL;
    this->InstigatingActor = NULL;
    this->DamageType = NULL;
    this->EnsureReplicationCounter = 0;
}


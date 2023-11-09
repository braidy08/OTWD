#include "DamageReceivedData.h"

FDamageReceivedData::FDamageReceivedData() {
    this->bFatal = false;
    this->Damage = 1;
    this->InstigatingController = NULL;
    this->InstigatingActor = NULL;
    this->DamageType = NULL;
}


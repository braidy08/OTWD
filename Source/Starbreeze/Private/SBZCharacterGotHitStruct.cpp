#include "SBZCharacterGotHitStruct.h"

FSBZCharacterGotHitStruct::FSBZCharacterGotHitStruct() {
    this->TargetClass = NULL;
    this->bIsTargetDead = false;
    this->bIsSelfDamage = false;
    this->Damage = 1;
    this->WeaponClass = NULL;
    this->InstigatorClass = NULL;
    this->DamageTypeClass = NULL;
    this->PlayerController = NULL;
}


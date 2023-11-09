#include "SBZAttackEventStruct.h"

FSBZAttackEventStruct::FSBZAttackEventStruct() {
    this->PlayerController = NULL;
    this->CharacterClass = NULL;
    this->WeaponClass = NULL;
    this->EnemyClass = NULL;
    this->EnemiesHit = 0;
    this->DamageDone = 0;
    this->bIsAds = false;
}


#include "SBZCollectedGameStatistics.h"

FSBZCollectedGameStatistics::FSBZCollectedGameStatistics() {
    this->WeaponAccuracy = 1;
    this->RangedWeaponAccuracy = 1;
    this->MeleeWeaponAccuracy = 1;
    this->RangedShots = 0;
    this->RangedHits = 0;
    this->MeleeSwings = 0;
    this->MeleeHits = 0;
    this->Kills = 0;
    this->Headshots = 0;
    this->Deaths = 0;
    this->Assists = 0;
    this->DamageTaken = 1;
    this->bPlayerDetectedByHumans = false;
    this->ReviveCounter = 0;
}


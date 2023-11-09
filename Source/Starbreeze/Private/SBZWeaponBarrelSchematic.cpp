#include "SBZWeaponBarrelSchematic.h"

FSBZWeaponBarrelSchematic::FSBZWeaponBarrelSchematic() {
    this->FireMode = ESBZWeaponBarrelFireMode::Hitscan;
    this->MagazineAmmoToConsumePerFire = 0;
    this->Projectile = NULL;
    this->ProjectilesPerFire = 0;
    this->SpreadRecoveryMode = ESBZWeaponSpreadRecoveryMode::ResetTime;
    this->TraceEffectLength = 1;
    this->FireEffect = NULL;
    this->FireEffectTP = NULL;
    this->ShellEffect = NULL;
    this->TraceEffect = NULL;
    this->SingleFireEvent = NULL;
    this->AutoFireStartEvent = NULL;
    this->AutoFireStopEvent = NULL;
    this->DryFireEvent = NULL;
    this->ShotsBeforeAutoFire = 0;
    this->NoiseData = NULL;
}


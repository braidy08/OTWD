#include "OTWDMetagameSaveData.h"

UOTWDMetagameSaveData::UOTWDMetagameSaveData() {
    this->AmountOfTurnsUpKeepHasNotBeenPaid = 0;
    this->CurrentAdditionalChanceOfSpawningBase = 1;
    this->CurrentAdditionalChanceOfSpawningGrind = 1;
    this->CurrentBaseInstanecdMissionsCreated = 0;
    this->TurnsToNextSurvivorAddition = 0;
    this->TurnsToNextInstancedMissionAddition = 0;
    this->CampMoraleLevel = 1;
    this->Survivors.AddDefaulted(5);
    this->Buildings.AddDefaulted(4);
    this->AvailableMissions.AddDefaulted(5);
    this->bIsTimeLimitedVendorActive = false;
}


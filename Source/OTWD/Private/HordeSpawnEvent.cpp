#include "HordeSpawnEvent.h"

FHordeSpawnEvent::FHordeSpawnEvent() {
    this->HordeProgressScale = 1;
    this->OnActivatedFreezeTime = 1;
    this->PopulationCycleCurve = NULL;
    this->PopulationCycleAmplitude = 1;
    this->PopulationCyclePeriod = 1;
    this->PlayerCountMultipliers[0] = 1;
    this->PlayerCountMultipliers[1] = 1;
    this->PlayerCountMultipliers[2] = 1;
    this->PlayerCountMultipliers[3] = 1;
    this->ExposedSpawnerBehaviorCooldowns[0] = 0;
    this->ExposedSpawnerBehaviorCooldowns[1] = 0;
}


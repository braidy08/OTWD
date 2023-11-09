#include "SBZPlatformSpawnSettings.h"

FSBZPlatformSpawnSettings::FSBZPlatformSpawnSettings() {
    this->AllowedSpawnSignificance = ESBZSpawnSignificance::Low;
    this->PopulationLimit = 0;
    this->MaximumSpawnsPerFrame = 0;
    this->MaximumDestroysPerFrame = 0;
}


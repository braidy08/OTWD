#include "SBZEncounterTableSchematic.h"

USBZEncounterTableSchematic::USBZEncounterTableSchematic() {
    this->ForcePlayerAmountMultiplier.AddDefaulted(4);
    this->PoolPlayerAmountMultiplier.AddDefaulted(4);
    this->SpawnCycleTime = 1;
    this->ForcePopulationMissingToAllowSpawning = 0;
    this->MinimalForcePopulation = 0;
}


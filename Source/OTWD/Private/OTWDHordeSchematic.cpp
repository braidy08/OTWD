#include "OTWDHordeSchematic.h"

UOTWDHordeSchematic::UOTWDHordeSchematic() {
    this->HordeProgressScale = 1;
    this->HordeLevelSettingsCollection.AddDefaulted(4);
    this->MinimumEnemyLifetime = 1;
    this->HordeNoiseCutoff = 1;
}


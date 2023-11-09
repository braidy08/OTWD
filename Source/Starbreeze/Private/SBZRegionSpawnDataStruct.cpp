#include "SBZRegionSpawnDataStruct.h"

FSBZRegionSpawnDataStruct::FSBZRegionSpawnDataStruct() {
    this->CharacterSchematic = NULL;
    this->SpawnBehaviour = NULL;
    this->SpawnSignificance = ESBZSpawnSignificance::Low;
    this->NumberToSpawn = 0;
}


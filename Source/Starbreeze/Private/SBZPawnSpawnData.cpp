#include "SBZPawnSpawnData.h"

FSBZPawnSpawnData::FSBZPawnSpawnData() {
    this->CharacterSchematic = NULL;
    this->NoToSpawn = 0;
    this->SpawnBehaviour = NULL;
    this->SpawnSignificance = ESBZSpawnSignificance::Low;
}


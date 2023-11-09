#include "SBZPawnSpawnData.h"

FSBZPawnSpawnData::FSBZPawnSpawnData() {
    this->CharacterSchematic = NULL;
    this->NoToSpawn = 0;
    this->SpawnBehaviour = NULL;
    this->SpawnSignificance = ESBZSpawnSignificance::Low;
    this->bOverrideRandomRotation = false;
    this->RandomRotationOffset = 1;
}


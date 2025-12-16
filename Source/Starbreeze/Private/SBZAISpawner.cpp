#include "SBZAISpawner.h"

ASBZAISpawner::ASBZAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterSchematic = NULL;
    this->RandomRotationOffset = 1;
    this->SpawnBehaviour = NULL;
    this->SpawnSignificance = ESBZSpawnSignificance::Low;
    this->bHasGeneratedSpawnLocation = false;
}

APawn* ASBZAISpawner::GetLastSpawnedPawn() {
    return NULL;
}



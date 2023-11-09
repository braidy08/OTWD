#include "SBZAISpawner.h"

APawn* ASBZAISpawner::GetLastSpawnedPawn() {
    return NULL;
}

ASBZAISpawner::ASBZAISpawner() {
    this->CharacterSchematic = NULL;
    this->RandomRotationOffset = 1;
    this->SpawnSignificance = ESBZSpawnSignificance::Low;
    this->ActivationType = ESpawnActivationType::S_None;
}


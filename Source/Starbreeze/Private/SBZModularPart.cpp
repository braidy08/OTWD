#include "SBZModularPart.h"

FSBZModularPart::FSBZModularPart() {
    this->SpawnPriority = 0;
    this->ModularSchematic = NULL;
    this->StaticMeshClass = NULL;
    this->SkeletalMeshClass = NULL;
    this->bNoSkeletonUpdate = false;
    this->SpawnedMeshComponent = NULL;
    this->MeshMode = ESBZModularPartMeshMode::NONE;
    this->bHiddenInGame = false;
    this->bIsSlavePart = false;
    this->AssignedSlot = NULL;
}


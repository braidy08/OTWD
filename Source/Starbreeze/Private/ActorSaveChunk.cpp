#include "ActorSaveChunk.h"

FActorSaveChunk::FActorSaveChunk() {
    this->ActorClass = NULL;
    this->bIsActorHidden = false;
    this->bActorReplicates = false;
    this->PathHash = 0;
}


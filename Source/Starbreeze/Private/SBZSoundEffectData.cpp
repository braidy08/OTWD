#include "SBZSoundEffectData.h"

FSBZSoundEffectData::FSBZSoundEffectData() {
    this->StartSoundEvent = NULL;
    this->LoopSoundEvent = NULL;
    this->StopSoundEvent = NULL;
    this->bIsLoopStarted = false;
    this->bIsStopped = false;
}


#include "OTWDHordeRelocationVolume.h"

AOTWDHordeRelocationVolume::AOTWDHordeRelocationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RelocationType = EHordeRelocationType::Blocked;
}

void AOTWDHordeRelocationVolume::BlockHordeRelocation() {
}

void AOTWDHordeRelocationVolume::AllowHordeRelocation() {
}



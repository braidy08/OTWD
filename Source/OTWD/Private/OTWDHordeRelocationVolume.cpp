#include "OTWDHordeRelocationVolume.h"

void AOTWDHordeRelocationVolume::BlockHordeRelocation() {
}

void AOTWDHordeRelocationVolume::AllowHordeRelocation() {
}

AOTWDHordeRelocationVolume::AOTWDHordeRelocationVolume() {
    this->RelocationType = EHordeRelocationType::Blocked;
}


#include "SBZDangerMap.h"

ADEPRECATED_SBZDangerMap::ADEPRECATED_SBZDangerMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxUpdatesPerTick = 0;
    this->MaxTimeSlicePerTick = 1;
    this->MinDistForUpdate = 1;
    this->MaxDangerSearchRadius = 1;
}



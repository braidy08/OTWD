#include "SBZEncounterPhaseSpawnPoolRule.h"

USBZEncounterPhaseSpawnPoolRule::USBZEncounterPhaseSpawnPoolRule() {
    this->bCheckSpawnPoolPercentage = true;
    this->RemainingSpawnPool = 0;
    this->RemainingSpawnPoolPercentage = 1;
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
}


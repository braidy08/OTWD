#include "SBZEncounterPhase.h"

USBZEncounterPhase::USBZEncounterPhase() {
    this->Phase = EEncounterPhase::INVALID;
    this->bPhaseAllowsIntenseSpawning = false;
}

bool USBZEncounterPhase::DoesPhaseAllowIntenseSpawning() const {
    return false;
}



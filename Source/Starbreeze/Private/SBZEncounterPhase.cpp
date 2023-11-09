#include "SBZEncounterPhase.h"

bool USBZEncounterPhase::DoesPhaseAllowIntenseSpawning() const {
    return false;
}

USBZEncounterPhase::USBZEncounterPhase() {
    this->Phase = EEncounterPhase::INVALID;
    this->bPhaseAllowsIntenseSpawning = false;
}


#include "SBZEncounterTrigger.h"

void USBZEncounterTrigger::Trigger_Implementation(ASBZEncounter* Encounter) {
}

USBZEncounterTrigger::USBZEncounterTrigger() {
    this->TriggerOnEnterPhaseState = EEncounterPhaseState::Inactive;
}


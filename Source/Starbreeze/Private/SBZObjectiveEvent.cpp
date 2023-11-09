#include "SBZObjectiveEvent.h"

FSBZObjectiveEvent::FSBZObjectiveEvent() {
    this->ObjectiveSchematic = NULL;
    this->ParentObjective = NULL;
    this->CurrentCount = 0;
    this->TargetCount = 0;
    this->Timer = 1;
    this->bHasTimer = false;
}


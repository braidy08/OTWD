#include "SBZObjectiveState.h"

FSBZObjectiveState::FSBZObjectiveState() {
    this->CurrentCount = 0;
    this->TargetCount = 0;
    this->Schematic = NULL;
    this->Parent = NULL;
    this->StateFlag = ESBZObjectiveStateFlag::OSF_None;
}


#include "SBZStateMachineStateActionPhase.h"

USBZStateMachineStateActionPhase::USBZStateMachineStateActionPhase() {
    this->ActionPhaseData = NULL;
    this->InitialLongTimeoutDelay = 1;
}

void USBZStateMachineStateActionPhase::OnPawnObtained() {
}

void USBZStateMachineStateActionPhase::HandleMissionEnd(ESBZEndMissionState EndMissionStateResult) {
}



#include "SBZStateMachineStateActionPhase.h"

void USBZStateMachineStateActionPhase::OnPawnObtained() {
}

void USBZStateMachineStateActionPhase::HandleMissionEnd(ESBZEndMissionState EndMissionStateResult) {
}

USBZStateMachineStateActionPhase::USBZStateMachineStateActionPhase() {
    this->ActionPhaseData = NULL;
    this->InitialLongTimeoutDelay = 1;
}


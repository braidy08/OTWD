#include "SBZStateMachineStateGameError.h"

void USBZStateMachineStateGameError::HandleLoadingFinished() {
}

void USBZStateMachineStateGameError::GameErrorPopupIteraction(const FName ActionName, ESBZButtonInputType ButtonType, USBZPopupWidget* WidgetPointer) {
}

void USBZStateMachineStateGameError::DelayedTravelToMainMenu() {
}

USBZStateMachineStateGameError::USBZStateMachineStateGameError() {
    this->ErrorData = NULL;
}


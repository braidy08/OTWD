#include "SBZStateMachineStateWaitMainMenu.h"

USBZStateMachineStateWaitMainMenu::USBZStateMachineStateWaitMainMenu() {
    this->AsyncLoadingTimeSliceOverride = 1;
}

void USBZStateMachineStateWaitMainMenu::HandleBufferLevelLoadingFinished() {
}

void USBZStateMachineStateWaitMainMenu::CompleteAsyncLoading() {
}



#include "SBZStateMachineStateWaitMainMenu.h"

void USBZStateMachineStateWaitMainMenu::HandleBufferLevelLoadingFinished() {
}

void USBZStateMachineStateWaitMainMenu::CompleteAsyncLoading() {
}

USBZStateMachineStateWaitMainMenu::USBZStateMachineStateWaitMainMenu() {
    this->AsyncLoadingTimeSliceOverride = 1;
}


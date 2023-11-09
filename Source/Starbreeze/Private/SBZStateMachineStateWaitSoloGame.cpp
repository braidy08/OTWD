#include "SBZStateMachineStateWaitSoloGame.h"

void USBZStateMachineStateWaitSoloGame::HandleBufferLevelLoadingFinished() {
}

void USBZStateMachineStateWaitSoloGame::CompleteAsyncLoading() {
}

USBZStateMachineStateWaitSoloGame::USBZStateMachineStateWaitSoloGame() {
    this->AsyncLoadingTimeSliceOverride = 1;
}


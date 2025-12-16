#include "SBZStateMachineStateWaitSoloGame.h"

USBZStateMachineStateWaitSoloGame::USBZStateMachineStateWaitSoloGame() {
    this->AsyncLoadingTimeSliceOverride = 1;
}

void USBZStateMachineStateWaitSoloGame::HandleCinematicStopped() {
}

void USBZStateMachineStateWaitSoloGame::HandleBufferLevelLoadingFinished() {
}

void USBZStateMachineStateWaitSoloGame::CompleteAsyncLoading() {
}



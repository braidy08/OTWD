#include "SBZStateMachineStateWaitingActionPhaseHost.h"

void USBZStateMachineStateWaitingActionPhaseHost::PostSeamlessTravel(UWorld* NewWorld) {
}

void USBZStateMachineStateWaitingActionPhaseHost::HandleTransitionGameModeReady() {
}

void USBZStateMachineStateWaitingActionPhaseHost::HandlePlayerStateRegister(APlayerState* ChangedPlayerState) {
}

void USBZStateMachineStateWaitingActionPhaseHost::HandlePlayerReadyToAbsoluteTravel(FUniqueNetIdRepl PlayerId) {
}

void USBZStateMachineStateWaitingActionPhaseHost::HandlePlayerFinishedAbsoluteTravel(FUniqueNetIdRepl PlayerId) {
}

USBZStateMachineStateWaitingActionPhaseHost::USBZStateMachineStateWaitingActionPhaseHost() {
    this->TravelTimeOutTime = 1;
}


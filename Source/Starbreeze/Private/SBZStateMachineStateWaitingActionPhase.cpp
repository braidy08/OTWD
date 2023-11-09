#include "SBZStateMachineStateWaitingActionPhase.h"

void USBZStateMachineStateWaitingActionPhase::PostLoadTransitionMap(UWorld* NewWorld) {
}

void USBZStateMachineStateWaitingActionPhase::HandleTransitionGameModeReady() {
}

void USBZStateMachineStateWaitingActionPhase::HandleNetworkError(ESBZOnlineCode Result) {
}

void USBZStateMachineStateWaitingActionPhase::HandleGameReady() {
}

void USBZStateMachineStateWaitingActionPhase::HandleCinematicStopped() {
}

void USBZStateMachineStateWaitingActionPhase::HandleCinematicStarted() {
}

void USBZStateMachineStateWaitingActionPhase::HandleBeaconNetworkError(ESBZOnlineCode Result) {
}

void USBZStateMachineStateWaitingActionPhase::DelayedNetworkBeaconError() {
}

void USBZStateMachineStateWaitingActionPhase::CompleteAsyncLoading() {
}

USBZStateMachineStateWaitingActionPhase::USBZStateMachineStateWaitingActionPhase() {
    this->TransitionTimeOutTime = 1;
    this->AsyncLoadingTimeOutTime = 1;
    this->AsyncLoadingTimeSliceOverride = 1;
}


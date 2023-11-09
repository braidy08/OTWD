#include "SBZStateMachineStateWaitingResult.h"

void USBZStateMachineStateWaitingResult::TryCheckCachedPlayers() {
}

void USBZStateMachineStateWaitingResult::RestoreBeacons() {
}

void USBZStateMachineStateWaitingResult::HandleLostConnectionToHost(ESBZOnlineCode Result) {
}

void USBZStateMachineStateWaitingResult::HandleLoadingFinished() {
}

void USBZStateMachineStateWaitingResult::HandleBufferLevelLoadingFinished() {
}

USBZStateMachineStateWaitingResult::USBZStateMachineStateWaitingResult() {
    this->WaitingPlayersTimeDevelopment = 1;
    this->WaitingPlayersTimeShipping = 1;
    this->NumberOfAttempts = 0;
    this->WaitResultData = NULL;
}


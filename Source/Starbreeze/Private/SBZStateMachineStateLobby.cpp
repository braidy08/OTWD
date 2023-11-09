#include "SBZStateMachineStateLobby.h"

void USBZStateMachineStateLobby::WaitPlayersTickSeconds() {
}

void USBZStateMachineStateLobby::WaitGameTickSeconds() {
}

void USBZStateMachineStateLobby::TryUpdateWaitPlayersTimer() {
}

void USBZStateMachineStateLobby::StartWaitPlayersTimer() {
}

void USBZStateMachineStateLobby::StartWaitGameTimer() {
}

void USBZStateMachineStateLobby::ResetWaitPlayersTimer() {
}

void USBZStateMachineStateLobby::OnMissionEnd() {
}

void USBZStateMachineStateLobby::HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode) {
}

void USBZStateMachineStateLobby::HandleLostConnectionToHost(ESBZOnlineCode ErrorCode) {
}

USBZStateMachineStateLobby::USBZStateMachineStateLobby() {
    this->PlayersWaitTimeout = 0;
    this->ActionPhasePlayersWaitTimeout = 0;
    this->GameStartTimeout = 0;
}


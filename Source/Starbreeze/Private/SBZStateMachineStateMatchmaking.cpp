#include "SBZStateMachineStateMatchmaking.h"

void USBZStateMachineStateMatchmaking::HandleSessionBecomeOutdated() {
}

void USBZStateMachineStateMatchmaking::HandlePlayerCountChanged() {
}

void USBZStateMachineStateMatchmaking::HandleMatchInfoUpdated() {
}

void USBZStateMachineStateMatchmaking::HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode) {
}

void USBZStateMachineStateMatchmaking::HandleLostConnectionToHost(ESBZOnlineCode ErrorCode) {
}

void USBZStateMachineStateMatchmaking::FireMatchAcceptUnlock() {
}

USBZStateMachineStateMatchmaking::USBZStateMachineStateMatchmaking() {
    this->AcceptMatchTimeMax = 0;
    this->AcceptMatchUnlockTimeDebug = 0;
    this->AcceptMatchUnlockTimeShipping = 0;
    this->AcceptMatchUnlockTimePrivateParty = 0;
    this->AcceptMatchUnlockTimeCamp = 0;
}


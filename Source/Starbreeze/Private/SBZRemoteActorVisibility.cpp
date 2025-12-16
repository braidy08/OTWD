#include "SBZRemoteActorVisibility.h"

USBZRemoteActorVisibility::USBZRemoteActorVisibility() {
    this->LastRenderTimeTolerance = 1;
    this->SyncPeriod = 1;
}

void USBZRemoteActorVisibility::Server_SyncVisibilityState_Implementation(const FRemoteActorVisiblityState& State) {
}
bool USBZRemoteActorVisibility::Server_SyncVisibilityState_Validate(const FRemoteActorVisiblityState& State) {
    return true;
}

void USBZRemoteActorVisibility::Server_NotifyVisibilityChanged_Implementation(const FRemoteActorVisibilityDelta& Delta) {
}
bool USBZRemoteActorVisibility::Server_NotifyVisibilityChanged_Validate(const FRemoteActorVisibilityDelta& Delta) {
    return true;
}



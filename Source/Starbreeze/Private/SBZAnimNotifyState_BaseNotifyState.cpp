#include "SBZAnimNotifyState_BaseNotifyState.h"

USBZAnimNotifyState_BaseNotifyState::USBZAnimNotifyState_BaseNotifyState() {
    this->bBlockedOnPlayerLegs = false;
}

bool USBZAnimNotifyState_BaseNotifyState::NotifyAllowed(USkeletalMeshComponent* InMesh) const {
    return false;
}



#include "SBZAnimNotifyState_BaseNotifyState.h"

bool USBZAnimNotifyState_BaseNotifyState::NotifyAllowed(USkeletalMeshComponent* InMesh) const {
    return false;
}

USBZAnimNotifyState_BaseNotifyState::USBZAnimNotifyState_BaseNotifyState() {
    this->bBlockedOnPlayerLegs = false;
}


#include "SBZAnimNotify_BaseNotify.h"

bool USBZAnimNotify_BaseNotify::NotifyAllowed(USkeletalMeshComponent* InMesh) const {
    return false;
}

USBZAnimNotify_BaseNotify::USBZAnimNotify_BaseNotify() {
    this->bBlockedOnPlayerLegs = false;
}


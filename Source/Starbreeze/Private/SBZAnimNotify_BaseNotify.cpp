#include "SBZAnimNotify_BaseNotify.h"

USBZAnimNotify_BaseNotify::USBZAnimNotify_BaseNotify() {
    this->bBlockedOnPlayerLegs = false;
}

bool USBZAnimNotify_BaseNotify::NotifyAllowed(USkeletalMeshComponent* InMesh) const {
    return false;
}



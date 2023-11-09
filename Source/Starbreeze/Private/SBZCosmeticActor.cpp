#include "SBZCosmeticActor.h"

TSoftObjectPtr<USBZCosmeticActor> USBZCosmeticActor::GetUnlockableAsCosmeticActor(const USBZUnlockableMetadata* UnlockableMetadata) {
    return NULL;
}

USBZCosmeticActor::USBZCosmeticActor() {
    this->ActorClass = NULL;
}


#include "SBZUnlockableMetadata.h"

void USBZUnlockableMetadata::OrganizeRequirements() {
}

bool USBZUnlockableMetadata::IsUnlockableA(const UClass* Class) const {
    return false;
}

USBZUnlockableMetadata::USBZUnlockableMetadata() {
    this->contentPack = NULL;
    this->bHiddenUntilUnlocked = false;
    this->UnlockableClass = NULL;
}


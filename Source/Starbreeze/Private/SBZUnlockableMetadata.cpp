#include "SBZUnlockableMetadata.h"

USBZUnlockableMetadata::USBZUnlockableMetadata() {
    this->ContentPack = NULL;
    this->bHiddenUntilUnlocked = false;
    this->UnlockableClass = NULL;
}

void USBZUnlockableMetadata::OrganizeRequirements() {
}

bool USBZUnlockableMetadata::IsUnlockableA(const UClass* Class) const {
    return false;
}



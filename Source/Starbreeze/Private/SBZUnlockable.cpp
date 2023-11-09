#include "SBZUnlockable.h"

bool USBZUnlockable::MeetsAllRequirements(const UObject* WorldContextObject) const {
    return false;
}

USBZUnlockable::USBZUnlockable() {
    this->MetaData = NULL;
}


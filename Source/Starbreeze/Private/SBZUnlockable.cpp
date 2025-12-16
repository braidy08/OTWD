#include "SBZUnlockable.h"

USBZUnlockable::USBZUnlockable() {
    this->MetaData = NULL;
}

bool USBZUnlockable::MeetsAllRequirements(const UObject* WorldContextObject) const {
    return false;
}



#include "SBZContentPack.h"

bool USBZContentPack::CanBePurchased() const {
    return false;
}

USBZContentPack::USBZContentPack() {
    this->bCanEverBePurchased = true;
}


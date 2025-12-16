#include "SBZContentPack.h"

USBZContentPack::USBZContentPack() {
    this->bShouldDisplayPurchasedMessage = false;
    this->bCanEverBePurchased = true;
}

bool USBZContentPack::CanBePurchased() const {
    return false;
}



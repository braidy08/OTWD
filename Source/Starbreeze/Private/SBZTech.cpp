#include "SBZTech.h"

bool USBZTech::IsLoadoutRelevant() const {
    return false;
}

USBZTech::USBZTech() {
    this->bShouldBeAppliedToWeapon = true;
    this->bShouldBeAppliedToCharacter = true;
}


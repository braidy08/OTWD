#include "SBZTech.h"

USBZTech::USBZTech() {
    this->bShouldBeAppliedToWeapon = true;
    this->bShouldBeAppliedToCharacter = true;
}

bool USBZTech::IsLoadoutRelevant() const {
    return false;
}



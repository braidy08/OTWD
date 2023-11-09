#include "SBZThrownWeaponAISchematic.h"

USBZThrownWeaponAISchematic::USBZThrownWeaponAISchematic() {
    this->ThrownItem = NULL;
    this->CooldownOnSuccessful = 1;
    this->CooldownOnUnsuccessful = 1;
    this->ThrowAnimation = NULL;
    this->ThrowBlendSpaceAnimation = NULL;
    this->ThrowVoiceComment = ESBZVoiceComment::None;
}


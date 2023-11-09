#include "SBZModularWeaponPartComponent.h"

USBZWeaponPartStatsSchematic* USBZModularWeaponPartComponent::GetWeaponStats() const {
    return NULL;
}

USBZModularWeaponPartComponent::USBZModularWeaponPartComponent() {
    this->WeaponPartStats = NULL;
    this->RangedWeapon = NULL;
}


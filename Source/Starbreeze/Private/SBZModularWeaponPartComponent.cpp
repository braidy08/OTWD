#include "SBZModularWeaponPartComponent.h"

USBZModularWeaponPartComponent::USBZModularWeaponPartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponPartStats = NULL;
    this->RangedWeapon = NULL;
}

USBZWeaponPartStatsSchematic* USBZModularWeaponPartComponent::GetWeaponStats() const {
    return NULL;
}



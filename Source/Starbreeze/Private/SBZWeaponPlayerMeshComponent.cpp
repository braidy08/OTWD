#include "SBZWeaponPlayerMeshComponent.h"

void USBZWeaponPlayerMeshComponent::SetWeaponConfiguration(const FSBZWeaponConfiguration& NewWeaponConfiguration) {
}

void USBZWeaponPlayerMeshComponent::SetRarityCondition(ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition) {
}

ESBZWeaponRarity USBZWeaponPlayerMeshComponent::GetWeaponRarity() {
    return ESBZWeaponRarity::Ordinary;
}

ESBZWeaponCondition USBZWeaponPlayerMeshComponent::GetWeaponCondition() {
    return ESBZWeaponCondition::BattleWorn;
}

USBZWeaponPlayerMeshComponent::USBZWeaponPlayerMeshComponent() {
    this->AmmoStatsSchematic = NULL;
    this->SpeedLoaderMesh = NULL;
}


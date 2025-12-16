#include "SBZWeaponPlayerMeshComponent.h"

USBZWeaponPlayerMeshComponent::USBZWeaponPlayerMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmmoStatsSchematic = NULL;
    this->SpeedLoaderMesh = NULL;
}

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



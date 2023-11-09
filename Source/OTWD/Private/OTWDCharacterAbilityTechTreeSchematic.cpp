#include "OTWDCharacterAbilityTechTreeSchematic.h"

USBZGameplayAbilityData* UOTWDCharacterAbilityTechTreeSchematic::GetDefaultToolAbilityData() {
    return NULL;
}

USBZGameplayAbilityData* UOTWDCharacterAbilityTechTreeSchematic::GetDefaultSecondaryAbilityData() {
    return NULL;
}

USBZGameplayAbilityData* UOTWDCharacterAbilityTechTreeSchematic::GetDefaultDefenceAbilityData() {
    return NULL;
}

TMap<TSoftClassPtr<APawn>, UOTWDAbilityTechListSchematic*> UOTWDCharacterAbilityTechTreeSchematic::GetCharacterTrees() {
    return TMap<TSoftClassPtr<APawn>, UOTWDAbilityTechListSchematic*>();
}

UOTWDCharacterAbilityTechTreeSchematic::UOTWDCharacterAbilityTechTreeSchematic() {
    this->CachedDefaultSecondaryAbilityData = NULL;
    this->CachedDefaultToolAbilityData = NULL;
    this->CachedDefaultDefenceAbilityData = NULL;
}


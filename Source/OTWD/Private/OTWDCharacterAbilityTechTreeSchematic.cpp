#include "OTWDCharacterAbilityTechTreeSchematic.h"

UOTWDCharacterAbilityTechTreeSchematic::UOTWDCharacterAbilityTechTreeSchematic() {
}

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



#pragma once
#include "CoreMinimal.h"
#include "EAbilityInput.generated.h"

UENUM(BlueprintType)
enum class EAbilityInput : uint8 {
    UseAbility0,
    UseAbility1,
    UseAbility2,
    UseAbility3,
    UseAbility4,
    CraftAbility0,
    CraftAbility1,
    CraftAbility2,
    CraftAbility3,
    CraftAbility4,
    UseAbility5,
    UseAbility6,
    UseAbility7,
    UseAbility8,
    UseAbility9,
    ShoutoutAbility,
    CharacterAbilityLast = 0x4,
    CraftAbilityLast = 0x9,
    EAbilityInput_MAX = 0x10,
};


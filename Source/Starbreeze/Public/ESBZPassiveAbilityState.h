#pragma once
#include "CoreMinimal.h"
#include "ESBZPassiveAbilityState.generated.h"

UENUM(BlueprintType)
enum class ESBZPassiveAbilityState : uint8 {
    NONE,
    Ready,
    Active,
    Cooldown,
};


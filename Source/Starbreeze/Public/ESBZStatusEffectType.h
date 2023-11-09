#pragma once
#include "CoreMinimal.h"
#include "ESBZStatusEffectType.generated.h"

UENUM(BlueprintType)
enum class ESBZStatusEffectType : uint8 {
    Impact,
    Knockback,
    Stun,
    GameplayTag,
    Force,
    Shove,
    DamageReaction,
};


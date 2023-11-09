#pragma once
#include "CoreMinimal.h"
#include "ESBZRangedAttackFinishReason.generated.h"

UENUM(BlueprintType)
enum class ESBZRangedAttackFinishReason : uint8 {
    Undefined,
    Success,
    Canceled,
    TargetNotSeen,
    NoValidTarget,
    Grappled,
    DamageTaken,
};


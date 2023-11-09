#pragma once
#include "CoreMinimal.h"
#include "ESBZThrownAttackFinishReason.generated.h"

UENUM(BlueprintType)
enum class ESBZThrownAttackFinishReason : uint8 {
    Success,
    Cancelled,
    OnCooldown,
    Grappled,
    Undefined,
};


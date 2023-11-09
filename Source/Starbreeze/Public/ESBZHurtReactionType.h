#pragma once
#include "CoreMinimal.h"
#include "ESBZHurtReactionType.generated.h"

UENUM(BlueprintType)
enum class ESBZHurtReactionType : uint8 {
    None,
    Impact,
    Knockback,
    Force,
    Stun,
    Dodge,
    MAX,
};


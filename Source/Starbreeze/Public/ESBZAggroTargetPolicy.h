#pragma once
#include "CoreMinimal.h"
#include "ESBZAggroTargetPolicy.generated.h"

UENUM(BlueprintType)
enum class ESBZAggroTargetPolicy : uint8 {
    None,
    ClosestDistance,
    PreferredDistance,
};


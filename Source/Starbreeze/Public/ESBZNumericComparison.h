#pragma once
#include "CoreMinimal.h"
#include "ESBZNumericComparison.generated.h"

UENUM(BlueprintType)
enum class ESBZNumericComparison : uint8 {
    EqualTo,
    NotEqualTo,
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZVisibilityResult.generated.h"

UENUM(BlueprintType)
enum class ESBZVisibilityResult : uint8 {
    Indeterminate,
    Visible,
    Hidden,
    MAX,
    Highest = 0x2,
    Lowest = 0x0,
};


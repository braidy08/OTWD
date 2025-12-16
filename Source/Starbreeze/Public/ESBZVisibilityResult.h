#pragma once
#include "CoreMinimal.h"
#include "ESBZVisibilityResult.generated.h"

UENUM(BlueprintType)
enum class ESBZVisibilityResult : uint8 {
    Indeterminate,
    Visible,
    Hidden,
    MAX,
    Highest = Hidden,
    Lowest = Indeterminate,
};


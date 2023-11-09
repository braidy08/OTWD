#pragma once
#include "CoreMinimal.h"
#include "EDramaCheckRule.generated.h"

UENUM(BlueprintType)
enum class EDramaCheckRule : uint8 {
    IsIntense,
    IsCalm,
    HasPeaked,
};


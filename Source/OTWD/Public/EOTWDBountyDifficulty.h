#pragma once
#include "CoreMinimal.h"
#include "EOTWDBountyDifficulty.generated.h"

UENUM(BlueprintType)
enum class EOTWDBountyDifficulty : uint8 {
    Easy,
    Medium,
    Hard,
    MAX,
};


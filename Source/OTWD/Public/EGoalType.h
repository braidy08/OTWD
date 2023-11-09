#pragma once
#include "CoreMinimal.h"
#include "EGoalType.generated.h"

UENUM(BlueprintType)
enum class EGoalType : uint8 {
    GT_MoveToLocation,
    GT_None = 0xFF,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZLadderClimbActionType.generated.h"

UENUM(BlueprintType)
enum class ESBZLadderClimbActionType : uint8 {
    EnteringFromBottom,
    ExitingFromBottom,
    EnteringFromTop,
    ExitingFromTop,
    EnteringFromFall,
    Climb,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZTurnAnimationCommandType.generated.h"

UENUM(BlueprintType)
enum class ESBZTurnAnimationCommandType : uint8 {
    ETypeStartTurn,
    ETypeUpdateTurn,
    ETypeCancelTurn,
};


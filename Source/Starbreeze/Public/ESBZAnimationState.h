#pragma once
#include "CoreMinimal.h"
#include "ESBZAnimationState.generated.h"

UENUM(BlueprintType)
enum class ESBZAnimationState : uint8 {
    None,
    PeekUp,
    PeekRight,
    PeekLeft,
    Reloading,
};


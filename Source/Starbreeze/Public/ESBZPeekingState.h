#pragma once
#include "CoreMinimal.h"
#include "ESBZPeekingState.generated.h"

UENUM(BlueprintType)
enum class ESBZPeekingState : uint8 {
    None,
    Left,
    Right,
};


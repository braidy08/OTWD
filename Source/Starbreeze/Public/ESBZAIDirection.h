#pragma once
#include "CoreMinimal.h"
#include "ESBZAIDirection.generated.h"

UENUM(BlueprintType)
enum class ESBZAIDirection : uint8 {
    None,
    Forward,
    Forward_Right,
    Right,
    Backward_Right,
    Backward,
    Backward_Left,
    Left,
    Forward_Left,
};


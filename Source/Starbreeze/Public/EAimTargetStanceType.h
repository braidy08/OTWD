#pragma once
#include "CoreMinimal.h"
#include "EAimTargetStanceType.generated.h"

UENUM(BlueprintType)
enum class EAimTargetStanceType : uint8 {
    None,
    Crouching,
    Prone,
    Sliding = 4,
    PeekingLeft = 8,
    PeekingRight = 16,
};


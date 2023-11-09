#pragma once
#include "CoreMinimal.h"
#include "EAimTargetStanceType.generated.h"

UENUM(BlueprintType)
enum class EAimTargetStanceType : uint8 {
    None,
    Crouching,
    Prone,
    Sliding = 0x4,
    PeekingLeft = 0x8,
    PeekingRight = 0x10,
};


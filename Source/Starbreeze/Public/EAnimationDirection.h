#pragma once
#include "CoreMinimal.h"
#include "EAnimationDirection.generated.h"

UENUM(BlueprintType)
enum class EAnimationDirection : uint8 {
    XPos,
    XNeg,
    YPos,
    YNeg,
    Any,
};


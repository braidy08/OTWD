#pragma once
#include "CoreMinimal.h"
#include "ESBZFrameRateCap.generated.h"

UENUM(BlueprintType)
enum class ESBZFrameRateCap : uint8 {
    None,
    Thirty,
    Custom,
};


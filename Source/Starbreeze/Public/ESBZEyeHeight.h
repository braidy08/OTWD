#pragma once
#include "CoreMinimal.h"
#include "ESBZEyeHeight.generated.h"

UENUM(BlueprintType)
enum class ESBZEyeHeight : uint8 {
    Current,
    Standing,
    Crouched,
};


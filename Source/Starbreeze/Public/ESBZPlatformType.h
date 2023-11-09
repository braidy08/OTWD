#pragma once
#include "CoreMinimal.h"
#include "ESBZPlatformType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlatformType : uint8 {
    PC,
    X1,
    PS4,
    Error,
};


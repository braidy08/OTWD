#pragma once
#include "CoreMinimal.h"
#include "ESBZReasonType.generated.h"

UENUM(BlueprintType)
enum class ESBZReasonType : uint8 {
    Craft,
    Trade,
    Loot,
};


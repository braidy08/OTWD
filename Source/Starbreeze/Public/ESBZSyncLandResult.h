#pragma once
#include "CoreMinimal.h"
#include "ESBZSyncLandResult.generated.h"

UENUM(BlueprintType)
enum class ESBZSyncLandResult : uint8 {
    None,
    LightLand,
    HeavyLand,
    SkipLand,
};


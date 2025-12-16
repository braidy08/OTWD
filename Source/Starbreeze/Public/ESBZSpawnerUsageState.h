#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnerUsageState.generated.h"

UENUM(BlueprintType)
enum class ESBZSpawnerUsageState : uint8 {
    Enabled,
    PendingEnable,
    Disabled,
};


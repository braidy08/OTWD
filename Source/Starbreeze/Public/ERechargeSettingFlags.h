#pragma once
#include "CoreMinimal.h"
#include "ERechargeSettingFlags.generated.h"

UENUM(BlueprintType)
enum class ERechargeSettingFlags : uint8 {
    WhenDecreased,
    WhenIncreased,
};


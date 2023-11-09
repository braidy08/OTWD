#pragma once
#include "CoreMinimal.h"
#include "EOTWDPlayFabWandererStatus.generated.h"

UENUM(BlueprintType)
enum class EOTWDPlayFabWandererStatus : uint8 {
    InProgress,
    Completed,
    Expired,
};


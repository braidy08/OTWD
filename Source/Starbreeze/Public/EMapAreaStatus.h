#pragma once
#include "CoreMinimal.h"
#include "EMapAreaStatus.generated.h"

UENUM(BlueprintType)
enum class EMapAreaStatus : uint8 {
    Unlocked,
    Locked,
    DLC,
};


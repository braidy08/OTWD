#pragma once
#include "CoreMinimal.h"
#include "ESBZAlignSlotBlockedChecks.generated.h"

UENUM(BlueprintType)
enum class ESBZAlignSlotBlockedChecks : uint8 {
    None,
    All,
    FirstOnly,
    AllButFirst,
};


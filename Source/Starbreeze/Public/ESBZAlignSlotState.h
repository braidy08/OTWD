#pragma once
#include "CoreMinimal.h"
#include "ESBZAlignSlotState.generated.h"

UENUM(BlueprintType)
enum class ESBZAlignSlotState : uint8 {
    NotStarted,
    Pending,
    Aligning,
    Aligned,
};


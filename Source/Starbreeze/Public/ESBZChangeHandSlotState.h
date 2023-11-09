#pragma once
#include "CoreMinimal.h"
#include "ESBZChangeHandSlotState.generated.h"

UENUM(BlueprintType)
enum class ESBZChangeHandSlotState : uint8 {
    Equipped,
    Equipping,
    Unequipped,
    UnequippedVisible,
    Unequipping,
};


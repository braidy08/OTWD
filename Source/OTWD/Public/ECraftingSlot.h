#pragma once
#include "CoreMinimal.h"
#include "ECraftingSlot.generated.h"

UENUM(BlueprintType)
enum class ECraftingSlot : uint8 {
    Signature,
    Secondary,
    Tool,
};


#pragma once
#include "CoreMinimal.h"
#include "EOTWDAbilityLoadoutSlot.generated.h"

UENUM(BlueprintType)
enum class EOTWDAbilityLoadoutSlot : uint8 {
    Secondary,
    Tool,
    Defence,
    MAX,
};


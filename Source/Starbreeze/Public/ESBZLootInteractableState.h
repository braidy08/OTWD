#pragma once
#include "CoreMinimal.h"
#include "ESBZLootInteractableState.generated.h"

UENUM(BlueprintType)
enum class ESBZLootInteractableState : uint8 {
    Closed,
    Looted,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorInteractionType.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorInteractionType : uint8 {
    Open,
    Close,
    Barricade,
    Break,
};


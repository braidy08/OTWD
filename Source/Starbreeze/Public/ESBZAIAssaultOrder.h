#pragma once
#include "CoreMinimal.h"
#include "ESBZAIAssaultOrder.generated.h"

UENUM(BlueprintType)
enum class ESBZAIAssaultOrder : uint8 {
    None,
    MoveToHardpoint,
    MoveToLocation,
    Fled,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZAssaultAction.generated.h"

UENUM(BlueprintType)
enum class ESBZAssaultAction : uint8 {
    None,
    Moving,
    Engage,
};


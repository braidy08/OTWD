#pragma once
#include "CoreMinimal.h"
#include "ESBZBreachTargetActivationType.generated.h"

UENUM(BlueprintType)
enum class ESBZBreachTargetActivationType : uint8 {
    AtLeastOneActive,
    AllActive,
};


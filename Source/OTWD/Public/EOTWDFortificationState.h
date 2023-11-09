#pragma once
#include "CoreMinimal.h"
#include "EOTWDFortificationState.generated.h"

UENUM(BlueprintType)
enum class EOTWDFortificationState : uint8 {
    Disabled,
    Ghost,
    Placed,
};


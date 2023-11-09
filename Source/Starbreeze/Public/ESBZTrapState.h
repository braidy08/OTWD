#pragma once
#include "CoreMinimal.h"
#include "ESBZTrapState.generated.h"

UENUM(BlueprintType)
enum class ESBZTrapState : uint8 {
    Armed,
    Disarmed,
    Activated,
};


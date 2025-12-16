#pragma once
#include "CoreMinimal.h"
#include "ESBZShutterState.generated.h"

UENUM(BlueprintType)
enum class ESBZShutterState : uint8 {
    Stationary,
    Opening,
    Closing,
};


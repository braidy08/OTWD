#pragma once
#include "CoreMinimal.h"
#include "EOTWDDefencePointState.generated.h"

UENUM(BlueprintType)
enum class EOTWDDefencePointState : uint8 {
    Safe,
    Caution,
    Danger,
};


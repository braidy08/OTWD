#pragma once
#include "CoreMinimal.h"
#include "ESBZDistanceScoringFunction.generated.h"

UENUM(BlueprintType)
namespace ESBZDistanceScoringFunction {
    enum Type {
        Linear,
        Square,
        SquareRoot,
    };
}


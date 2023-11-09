#pragma once
#include "CoreMinimal.h"
#include "ESBZProgressAnimType.generated.h"

UENUM(BlueprintType)
enum class ESBZProgressAnimType : uint8 {
    None,
    Linear,
    Ease_In,
    Ease_Out,
    Ease_In_And_Out,
    Exponential,
};


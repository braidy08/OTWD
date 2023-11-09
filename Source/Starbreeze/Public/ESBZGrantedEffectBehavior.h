#pragma once
#include "CoreMinimal.h"
#include "ESBZGrantedEffectBehavior.generated.h"

UENUM(BlueprintType)
enum class ESBZGrantedEffectBehavior : uint8 {
    ApplyToCharacter,
    IncreaseEffectLevel,
    SetMinimumEffectLevel,
};


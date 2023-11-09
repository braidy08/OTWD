#pragma once
#include "CoreMinimal.h"
#include "ESBZLightScenario.generated.h"

UENUM(BlueprintType)
enum class ESBZLightScenario : uint8 {
    Day,
    Night,
    Fog,
    Underground,
    Overcast,
    GoldenHour,
};


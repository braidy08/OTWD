#pragma once
#include "CoreMinimal.h"
#include "EThreatEnum.generated.h"

UENUM(BlueprintType)
enum class EThreatEnum : uint8 {
    Boss,
    Minion,
    Hazard,
    Trap,
};


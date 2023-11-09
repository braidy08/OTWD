#pragma once
#include "CoreMinimal.h"
#include "ESurvivorClassType.generated.h"

UENUM(BlueprintType)
enum class ESurvivorClassType : uint8 {
    Tank,
    Scout,
    Tactician,
    Support,
};


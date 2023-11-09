#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.generated.h"

UENUM(BlueprintType)
enum class ESBZDifficulty : uint8 {
	Normal = 0x0,
    Hard,
    VeryHard,
    Overkill,
    MAX,
    Any,
    Default = 0x0,
};


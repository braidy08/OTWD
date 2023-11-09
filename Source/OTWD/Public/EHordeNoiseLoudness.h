#pragma once
#include "CoreMinimal.h"
#include "EHordeNoiseLoudness.generated.h"

UENUM(BlueprintType)
enum class EHordeNoiseLoudness : uint8 {
    Light,
    Medium,
    Heavy,
    None,
};


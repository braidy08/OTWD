#pragma once
#include "CoreMinimal.h"
#include "EAISoundType.generated.h"

UENUM(BlueprintType)
enum class EAISoundType : uint8 {
    NotSpecified,
    Gunshot,
    Melee,
    Footsteps,
    Death,
    Landed,
};


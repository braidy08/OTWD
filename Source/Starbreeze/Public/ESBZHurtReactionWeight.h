#pragma once
#include "CoreMinimal.h"
#include "ESBZHurtReactionWeight.generated.h"

UENUM(BlueprintType)
enum class ESBZHurtReactionWeight : uint8 {
    Light,
    Medium,
    Heavy,
    MAX,
};


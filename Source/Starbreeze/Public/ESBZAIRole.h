#pragma once
#include "CoreMinimal.h"
#include "ESBZAIRole.generated.h"

UENUM(BlueprintType)
enum class ESBZAIRole : uint8 {
    ERoleUnassigned,
    ERoleDefender,
    ERoleRusher,
    ERoleDefault,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZAIShoveInfo.generated.h"

UENUM(BlueprintType)
enum class ESBZAIShoveInfo : uint8 {
    SI_NONE,
    SI_ANTICIPATION,
    SI_EXECUTE,
    SI_SUCCESS,
    SI_FAILED,
    SI_RECOVER_DONE,
    SI_INTERRUPTED,
    SI_MAX UMETA(Hidden),
};


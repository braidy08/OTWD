#pragma once
#include "CoreMinimal.h"
#include "ESBZAIRoleAggressiveness.generated.h"

UENUM(BlueprintType)
enum class ESBZAIRoleAggressiveness : uint8 {
    ERoleAggressivenessVeryLow,
    ERoleAggressivenessLow,
    ERoleAggressivenessMedium,
    ERoleAggressivenessHigh,
    ERoleAggressivenessVeryHigh,
};


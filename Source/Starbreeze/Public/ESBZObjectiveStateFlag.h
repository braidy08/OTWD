#pragma once
#include "CoreMinimal.h"
#include "ESBZObjectiveStateFlag.generated.h"

UENUM(BlueprintType)
enum class ESBZObjectiveStateFlag : uint8 {
    OSF_None,
    OSF_Complete,
    OSF_Failed,
    OSF_MAX UMETA(Hidden),
};


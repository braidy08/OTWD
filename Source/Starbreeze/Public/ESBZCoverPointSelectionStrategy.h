#pragma once
#include "CoreMinimal.h"
#include "ESBZCoverPointSelectionStrategy.generated.h"

UENUM(BlueprintType)
enum class ESBZCoverPointSelectionStrategy : uint8 {
    EUnassigned,
    EForwardPosition,
    EDefensivePosition,
};


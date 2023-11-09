#pragma once
#include "CoreMinimal.h"
#include "ESBZCoverAngleSearchFlag.generated.h"

UENUM(BlueprintType)
enum class ESBZCoverAngleSearchFlag : uint8 {
    None,
    BestCoverageAngle_Low,
    BestCoverageAngle_Medium,
    BestCoverageAngle_High,
    BestShootingAngle_Low,
    BestShootingAngle_Medium,
    BestShootingAngle_High,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZEnvQueryTest_ShootingPointTypeMatchType.generated.h"

UENUM(BlueprintType)
enum class ESBZEnvQueryTest_ShootingPointTypeMatchType : uint8 {
    All,
    Any,
    ESBZEnvQueryTest_MAX UMETA(Hidden),
};


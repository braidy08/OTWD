#pragma once
#include "CoreMinimal.h"
#include "ESBZBTDecorator_ShootingPointTypeMatchType.generated.h"

UENUM(BlueprintType)
enum class ESBZBTDecorator_ShootingPointTypeMatchType : uint8 {
    All,
    Any,
    ESBZBTDecorator_MAX UMETA(Hidden),
};


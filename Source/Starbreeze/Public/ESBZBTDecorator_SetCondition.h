#pragma once
#include "CoreMinimal.h"
#include "ESBZBTDecorator_SetCondition.generated.h"

UENUM(BlueprintType)
enum class ESBZBTDecorator_SetCondition : uint8 {
    OnNodeActivation,
    OnNodeDeactivation,
    ESBZBTDecorator_MAX UMETA(Hidden),
};


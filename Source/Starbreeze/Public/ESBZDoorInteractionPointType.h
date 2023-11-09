#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorInteractionPointType.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorInteractionPointType : uint8 {
    OpeningPoint,
    TargetClosingPoint,
    CurrentClosingPoint,
};


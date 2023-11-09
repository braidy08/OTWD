#pragma once
#include "CoreMinimal.h"
#include "EDetectionType.generated.h"

UENUM(BlueprintType)
enum class EDetectionType : uint8 {
    eRay,
    eShape,
};


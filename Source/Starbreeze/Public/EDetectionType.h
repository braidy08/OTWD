#pragma once
#include "CoreMinimal.h"
#include "EDetectionType.generated.h"

UENUM()
enum class EDetectionType : int32 {
    eRay,
    eShape,
    eCustomFunction,
};


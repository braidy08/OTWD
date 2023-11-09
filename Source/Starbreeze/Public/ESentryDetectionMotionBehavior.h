#pragma once
#include "CoreMinimal.h"
#include "ESentryDetectionMotionBehavior.generated.h"

UENUM(BlueprintType)
enum class ESentryDetectionMotionBehavior : uint8 {
    eStopMoving,
    eContinueMotion,
    eFollowTarget,
};


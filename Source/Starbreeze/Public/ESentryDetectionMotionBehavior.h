#pragma once
#include "CoreMinimal.h"
#include "ESentryDetectionMotionBehavior.generated.h"

UENUM()
enum class ESentryDetectionMotionBehavior : int32 {
    eStopMoving,
    eContinueMotion,
    eFollowTarget,
};


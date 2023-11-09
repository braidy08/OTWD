#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerGrappleStruggleCameraFeedbackApplicationType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerGrappleStruggleCameraFeedbackApplicationType : uint8 {
    None,
    OnDamage,
    Intermittently,
};


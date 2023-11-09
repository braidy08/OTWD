#pragma once
#include "CoreMinimal.h"
#include "ESBZSecurityCameraState.generated.h"

UENUM(BlueprintType)
enum class ESBZSecurityCameraState : uint8 {
    SCS_None,
    SCS_Move,
    SCS_Wait,
    SCS_Suspicious,
    SCS_Delay,
    SCS_Destroyed,
    SCS_Disabled,
    SCS_MAX UMETA(Hidden),
};


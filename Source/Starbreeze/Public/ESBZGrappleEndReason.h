#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleEndReason.generated.h"

UENUM(BlueprintType)
enum class ESBZGrappleEndReason : uint8 {
    Default,
    ForceEnd,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleRequestFailedReason.generated.h"

UENUM(BlueprintType)
enum class ESBZGrappleRequestFailedReason : uint8 {
    None,
    SystemNotInitialised,
    InvalidVictim,
    InvalidAttacker,
    AlignmentFailed,
};


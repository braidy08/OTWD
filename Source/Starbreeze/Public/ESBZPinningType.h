#pragma once
#include "CoreMinimal.h"
#include "ESBZPinningType.generated.h"

UENUM(BlueprintType)
enum class ESBZPinningType : uint8 {
    GrabbingArm,
    GrabbingLeg,
    EatingOnGround,
};


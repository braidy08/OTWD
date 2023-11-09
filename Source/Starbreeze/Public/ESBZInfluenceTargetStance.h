#pragma once
#include "CoreMinimal.h"
#include "ESBZInfluenceTargetStance.generated.h"

UENUM(BlueprintType)
enum class ESBZInfluenceTargetStance : uint8 {
    EInfluenceTargetStanceStanding,
    EInfluenceTargetStanceCrouching,
    EInfluenceTargetStancePeeking,
};


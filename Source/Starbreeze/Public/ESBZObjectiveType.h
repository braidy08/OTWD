#pragma once
#include "CoreMinimal.h"
#include "ESBZObjectiveType.generated.h"

UENUM(BlueprintType)
enum class ESBZObjectiveType : uint8 {
    OT_None,
    OT_MainObjective,
    OT_SubObjective,
    OT_SideObjective,
    OT_MAX UMETA(Hidden),
};


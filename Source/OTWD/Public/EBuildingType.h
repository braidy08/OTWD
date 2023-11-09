#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.generated.h"

UENUM(BlueprintType)
enum class EBuildingType : uint8 {
    Building_Radio,
    Building_Defense,
    Building_Combat,
    Building_Medical,
    Building_MAX UMETA(Hidden),
};


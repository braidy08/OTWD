#pragma once
#include "CoreMinimal.h"
#include "ESBZBuildingAccessState.generated.h"

UENUM(BlueprintType)
enum class ESBZBuildingAccessState : uint8 {
    Closed,
    Opened,
    Spawner,
    Destroyed,
};


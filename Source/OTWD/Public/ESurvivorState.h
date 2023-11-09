#pragma once
#include "CoreMinimal.h"
#include "ESurvivorState.generated.h"

UENUM(BlueprintType)
enum class ESurvivorState : uint8 {
    Idle,
    OnMission,
    InBuilding,
    Dying,
    DiedOnMission,
    Dead,
    Injured,
    OnMissionAndInjured,
    InBuildingAndInjured,
};


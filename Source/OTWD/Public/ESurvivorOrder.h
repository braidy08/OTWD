#pragma once
#include "CoreMinimal.h"
#include "ESurvivorOrder.generated.h"

UENUM(BlueprintType)
enum class ESurvivorOrder : uint8 {
    All,
    Scout,
    Tank,
    Sniper,
    Medic,
    Working,
    Dispatched,
    Injured,
    Dying,
    Dead,
    AvailableForMissions,
    AvailableForBuildings,
    Alive,
};


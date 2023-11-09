#pragma once
#include "CoreMinimal.h"
#include "EMissionTypes.generated.h"

UENUM(BlueprintType)
enum class EMissionTypes : uint8 {
    Scavenge,
    Assault,
    Defense_Zombie,
    Defense_Human,
    Rescue,
    Camp,
    Story,
    Story_CampDefense,
    Weekly,
};


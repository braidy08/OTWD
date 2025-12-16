#pragma once
#include "CoreMinimal.h"
#include "EOTWDInstancedQuestType.generated.h"

UENUM(BlueprintType)
enum class EOTWDInstancedQuestType : uint8 {
    CampDefence,
    Rescue,
    Kill,
    Scavenge,
    MAX,
    Default = Rescue,
};


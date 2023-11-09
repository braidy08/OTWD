#pragma once
#include "CoreMinimal.h"
#include "EOTWDInstancedQuestType.generated.h"

UENUM(BlueprintType)
enum class EOTWDInstancedQuestType : uint8 {
    CampDefence,
	Rescue = 0x1,
    Kill,
    Scavenge,
    MAX,
    Default = 0x1,
};


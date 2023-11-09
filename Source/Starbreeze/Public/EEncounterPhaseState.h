#pragma once
#include "CoreMinimal.h"
#include "EEncounterPhaseState.generated.h"

UENUM(BlueprintType)
enum class EEncounterPhaseState : uint8 {
    Inactive,
    Entering,
    Running,
    Leaving,
};


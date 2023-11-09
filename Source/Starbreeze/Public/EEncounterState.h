#pragma once
#include "CoreMinimal.h"
#include "EEncounterState.generated.h"

UENUM(BlueprintType)
enum class EEncounterState : uint8 {
    Stopped,
    Running,
    Paused,
};


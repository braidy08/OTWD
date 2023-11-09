#pragma once
#include "CoreMinimal.h"
#include "EEncounterPhase.generated.h"

UENUM(BlueprintType)
enum class EEncounterPhase : uint8 {
    INVALID,
    Relax,
    Build,
    Sustain,
    Fade,
};


#pragma once
#include "CoreMinimal.h"
#include "EInteractionFactionRestriction.generated.h"

UENUM(BlueprintType)
enum class EInteractionFactionRestriction : uint8 {
    NoRestriction,
    SameFaction,
    FriendlyFaction,
    NeutralFaction,
    HostileFaction,
};


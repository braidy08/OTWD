#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineSessionPhase.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineSessionPhase : uint8 {
    Undefined,
    PartyCreation,
    Matchmaking,
    Lobby,
    ActionPhase,
    ActionPhaseEnd,
    WaitingResult,
    ResultSuccess,
};


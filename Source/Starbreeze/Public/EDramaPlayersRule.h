#pragma once
#include "CoreMinimal.h"
#include "EDramaPlayersRule.generated.h"

UENUM(BlueprintType)
enum class EDramaPlayersRule : uint8 {
    SinglePlayer,
    MostPlayers,
};


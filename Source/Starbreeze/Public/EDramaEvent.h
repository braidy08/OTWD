#pragma once
#include "CoreMinimal.h"
#include "EDramaEvent.generated.h"

UENUM(BlueprintType)
enum class EDramaEvent : uint8 {
    EDamageTaken,
    EEnemyKilledNearby,
    EPlayerDowned,
    EPlayerGrappled,
    EEnemyGrappled,
};


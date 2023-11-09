#pragma once
#include "CoreMinimal.h"
#include "ESBZCoverDistSearchFlag.generated.h"

UENUM(BlueprintType)
enum class ESBZCoverDistSearchFlag : uint8 {
    None,
    PreferredDistFromPlayer_Low,
    PreferredDistFromPlayer_Medium,
    PreferredDistFromPlayer_High,
    PreferredDistFromEnemy_Low,
    PreferredDistFromEnemy_Medium,
    PreferredDistFromEnemy_High,
};


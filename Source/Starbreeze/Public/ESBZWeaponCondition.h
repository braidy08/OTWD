#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponCondition.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponCondition : uint8 {
    BattleWorn,
    BrokenIn,
    WellUsed,
    MintCondition,
    MAX,
    DEFAULT = MintCondition,
};


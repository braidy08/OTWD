#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponRarity : uint8 {
    Ordinary,
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
    Relic,
    MAX,
    DEFAULT = Rare,
};


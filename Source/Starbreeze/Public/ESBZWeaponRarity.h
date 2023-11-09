#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponRarity : uint8 {
    Ordinary,
    Common,
    Uncommon,
	Rare = 0x3,
    Epic,
    Legendary,
    Relic,
    MAX,
    DEFAULT = 0x3,
};


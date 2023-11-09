#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponBarrelFireMode.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponBarrelFireMode : uint8 {
	Hitscan = 0x0,
    Continuous,
    Projectiles,
    MAX,
    DEFAULT = 0x0,
};


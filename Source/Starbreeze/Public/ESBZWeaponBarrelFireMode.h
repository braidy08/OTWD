#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponBarrelFireMode.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponBarrelFireMode : uint8 {
    Hitscan,
    Continuous,
    Projectiles,
    MAX,
    DEFAULT = Hitscan,
};


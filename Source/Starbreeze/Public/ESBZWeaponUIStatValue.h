#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponUIStatValue.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponUIStatValue : uint8 {
    WeaponOnly,
    ModsOnly,
    Both,
};


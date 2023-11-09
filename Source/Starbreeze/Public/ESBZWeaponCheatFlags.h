#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponCheatFlags.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponCheatFlags : uint8 {
    None,
    InfiniteAmmo,
    InfiniteSilencer,
};


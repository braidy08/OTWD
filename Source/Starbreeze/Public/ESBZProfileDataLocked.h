#pragma once
#include "CoreMinimal.h"
#include "ESBZProfileDataLocked.generated.h"

UENUM(BlueprintType)
enum class ESBZProfileDataLocked : uint8 {
    Unlocked,
    Pawn,
    Weapon,
    WeaponPart,
    Cosmetic,
    Tech,
};


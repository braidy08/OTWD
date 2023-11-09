#pragma once
#include "CoreMinimal.h"
#include "ESBZRangedWeaponModuleType.generated.h"

UENUM(BlueprintType)
enum class ESBZRangedWeaponModuleType : uint8 {
    Flashlight,
    Silencer,
    SightScope,
    LaserSight,
    Ammo,
    Max,
    Unknown,
};


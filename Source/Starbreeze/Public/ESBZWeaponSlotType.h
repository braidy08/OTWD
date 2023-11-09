#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponSlotType.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponSlotType : uint8 {
    Primary,
    Secondary,
    Melee,
    MAX,
};


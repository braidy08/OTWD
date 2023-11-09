#pragma once
#include "CoreMinimal.h"
#include "ESBZRangedWeaponModuleResultType.generated.h"

UENUM(BlueprintType)
enum class ESBZRangedWeaponModuleResultType : uint8 {
    Success,
    NotEquipped,
    Depleated,
    AlreadySet,
};


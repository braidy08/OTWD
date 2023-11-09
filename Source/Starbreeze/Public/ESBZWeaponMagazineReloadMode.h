#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponMagazineReloadMode.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponMagazineReloadMode : uint8 {
    Full,
    Gradual,
};


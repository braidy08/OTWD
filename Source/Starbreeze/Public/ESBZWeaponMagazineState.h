#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponMagazineState.generated.h"

UENUM()
enum class ESBZWeaponMagazineState : int32 {
    Idle,
    Reloading,
    ReloadingAmmoLoaded,
};


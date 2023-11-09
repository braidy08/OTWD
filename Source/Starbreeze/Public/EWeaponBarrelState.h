#pragma once
#include "CoreMinimal.h"
#include "EWeaponBarrelState.generated.h"

UENUM()
enum class EWeaponBarrelState : int32 {
    Idle,
    Firing,
    Recovering,
};


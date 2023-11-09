#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponFamily : uint8 {
    None,
    Ranged_Pistol,
    Ranged_Revolver,
    Ranged_SMG,
    Ranged_Shotgun,
    Ranged_AssaultRifle,
    Ranged_Sniper,
    Ranged_Crossbow,
    Melee_Bat,
    Melee_Pick,
    Melee_Staff,
    Melee_Machete,
    Melee_Axe,
    MAX,
};


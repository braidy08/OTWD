#pragma once
#include "CoreMinimal.h"
#include "EOTWDVaultIdentifierType.generated.h"

UENUM(BlueprintType)
enum class EOTWDVaultIdentifierType : uint8 {
    Weapon,
    WeaponPart,
    MAX,
};


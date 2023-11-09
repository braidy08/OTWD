#pragma once
#include "CoreMinimal.h"
#include "EOTWDVendorItemSwitch.generated.h"

UENUM(BlueprintType)
enum class EOTWDVendorItemSwitch : uint8 {
    FailedToFind,
    Weapon,
    WeaponPart,
};


#pragma once
#include "CoreMinimal.h"
#include "EFriendlyFireAction.generated.h"

UENUM(BlueprintType)
enum class EFriendlyFireAction : uint8 {
    TreatAsDefault,
    ApplyDamageModifier,
    CancelAttack,
};


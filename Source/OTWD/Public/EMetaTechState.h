#pragma once
#include "CoreMinimal.h"
#include "EMetaTechState.generated.h"

UENUM(BlueprintType)
enum class EMetaTechState : uint8 {
    Purchased,
    Purchasable,
    NonPurchasable,
};


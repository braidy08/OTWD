#pragma once
#include "CoreMinimal.h"
#include "ESBZTransactionType.generated.h"

UENUM(BlueprintType)
enum class ESBZTransactionType : uint8 {
    Unknown,
    Earn,
    Spend,
};


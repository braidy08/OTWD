#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatMontageType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerDefeatMontageType : uint8 {
    Revive,
    AliveToBleedOut,
    AliveToDead,
};


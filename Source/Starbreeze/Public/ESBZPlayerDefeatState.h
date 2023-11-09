#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerDefeatState : uint8 {
    None,
    BleedOut,
    Downed,
    Dead,
    Reviving,
};


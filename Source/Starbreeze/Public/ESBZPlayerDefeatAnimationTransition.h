#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatAnimationTransition.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerDefeatAnimationTransition : uint8 {
    None,
    EnterDefeat,
    Reviving,
};


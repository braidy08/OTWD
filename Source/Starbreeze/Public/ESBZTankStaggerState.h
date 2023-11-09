#pragma once
#include "CoreMinimal.h"
#include "ESBZTankStaggerState.generated.h"

UENUM(BlueprintType)
enum class ESBZTankStaggerState : uint8 {
    TSS_None,
    TSS_SHIELD_STAGGER,
    TSS_BODY_STAGGER,
    TSS_STAGGER_RECOVER,
    TSS_MAX UMETA(Hidden),
};


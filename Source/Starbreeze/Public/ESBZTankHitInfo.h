#pragma once
#include "CoreMinimal.h"
#include "ESBZTankHitInfo.generated.h"

UENUM(BlueprintType)
enum class ESBZTankHitInfo : uint8 {
    THI_None,
    THI_WeakSpot,
    THI_ArmorPart,
    THI_Body,
    THI_MAX UMETA(Hidden),
};


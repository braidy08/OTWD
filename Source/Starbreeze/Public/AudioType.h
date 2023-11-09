#pragma once
#include "CoreMinimal.h"
#include "AudioType.generated.h"

UENUM(BlueprintType)
enum class AudioType : uint8 {
    Master,
    Music,
    SFX,
    VO,
    HUD,
    VOIP,
};


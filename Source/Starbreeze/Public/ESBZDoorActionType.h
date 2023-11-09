#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorActionType : uint8 {
    None,
    OpenFrontSlow,
    OpenFrontFast,
    OpenFrontSlam,
    OpenBackSlow,
    OpenBackFast,
    OpenBackSlam,
    CloseFromBackSlow,
    CloseFromBackFast,
    CloseFromBackSlam,
    CloseFromFrontSlow,
    CloseFromFrontFast,
    CloseFromFrontSlam,
    Barricade,
    UnBarricade,
    Break,
    Unlock,
    BreakFromFront,
    BreakFromBack,
    UnBlock,
};


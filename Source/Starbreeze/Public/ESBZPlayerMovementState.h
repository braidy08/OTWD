#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerMovementState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerMovementState : uint8 {
    Walk,
    Run,
    Crouch,
    Prone,
    Slide,
    StandStuck,
    CrouchStuck,
    Vault,
    Crawl,
};


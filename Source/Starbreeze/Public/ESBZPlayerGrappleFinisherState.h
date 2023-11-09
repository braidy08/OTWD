#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerGrappleFinisherState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerGrappleFinisherState : uint8 {
    Waiting,
    DoNothing,
    DoShove,
    DoStruggleShove,
    Penalty,
};


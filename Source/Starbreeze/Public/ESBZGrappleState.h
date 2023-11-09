#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleState.generated.h"

UENUM(BlueprintType)
enum class ESBZGrappleState : uint8 {
    None,
    Pending,
    Align,
    Intro,
    Struggle,
    Outro,
    Finisher,
    Exiting,
};


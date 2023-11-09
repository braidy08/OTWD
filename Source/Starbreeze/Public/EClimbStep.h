#pragma once
#include "CoreMinimal.h"
#include "EClimbStep.generated.h"

UENUM(BlueprintType)
enum class EClimbStep : uint8 {
    CS_JumpStep,
    CS_JumpEdgeStep,
    CS_EdgeStep,
    CS_EdgeLandStep,
    CS_LandStep,
    CS_MAX UMETA(Hidden),
};


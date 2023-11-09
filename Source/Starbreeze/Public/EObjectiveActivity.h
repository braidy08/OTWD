#pragma once
#include "CoreMinimal.h"
#include "EObjectiveActivity.generated.h"

UENUM(BlueprintType)
enum class EObjectiveActivity : uint8 {
    OA_Complete,
    OA_Fail,
    OA_Increment,
    OA_Decrement,
    OA_MAX UMETA(Hidden),
};


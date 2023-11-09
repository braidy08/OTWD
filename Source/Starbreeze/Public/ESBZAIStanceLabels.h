#pragma once
#include "CoreMinimal.h"
#include "ESBZAIStanceLabels.generated.h"

UENUM(BlueprintType)
enum class ESBZAIStanceLabels : uint8 {
    Patrol,
    GoalMoveTo,
    Investigate,
    Combat,
    Search,
    Suspicious,
    Combat_Walk,
    Combat_Sprint,
};


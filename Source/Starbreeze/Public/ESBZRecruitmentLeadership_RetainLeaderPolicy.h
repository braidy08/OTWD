#pragma once
#include "CoreMinimal.h"
#include "ESBZRecruitmentLeadership_RetainLeaderPolicy.generated.h"

UENUM()
enum class ESBZRecruitmentLeadership_RetainLeaderPolicy : int32 {
    ResetLeaderInNonRecruitingStates,
    AlwaysKeepLeader,
    ESBZRecruitmentLeadership_MAX UMETA(Hidden),
};


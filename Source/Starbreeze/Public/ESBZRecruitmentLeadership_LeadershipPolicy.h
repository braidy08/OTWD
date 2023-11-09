#pragma once
#include "CoreMinimal.h"
#include "ESBZRecruitmentLeadership_LeadershipPolicy.generated.h"

UENUM()
enum class ESBZRecruitmentLeadership_LeadershipPolicy : int32 {
    None,
    FirstRecruiter,
    ESBZRecruitmentLeadership_MAX UMETA(Hidden),
};


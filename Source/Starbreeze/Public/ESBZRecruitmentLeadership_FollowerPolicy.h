#pragma once
#include "CoreMinimal.h"
#include "ESBZRecruitmentLeadership_FollowerPolicy.generated.h"

UENUM()
enum class ESBZRecruitmentLeadership_FollowerPolicy : int32 {
    KeepRecruiting,
    DoNotRecruit,
    ESBZRecruitmentLeadership_MAX UMETA(Hidden),
};


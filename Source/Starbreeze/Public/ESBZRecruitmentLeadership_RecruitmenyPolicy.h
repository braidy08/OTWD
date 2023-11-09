#pragma once
#include "CoreMinimal.h"
#include "ESBZRecruitmentLeadership_RecruitmenyPolicy.generated.h"

UENUM()
enum class ESBZRecruitmentLeadership_RecruitmenyPolicy : int32 {
    AcceptAll,
    AcceptLeader,
    ESBZRecruitmentLeadership_MAX UMETA(Hidden),
};


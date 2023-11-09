#pragma once
#include "CoreMinimal.h"
#include "ESBZRecruitmentLeadership_FollowerPolicy.h"
#include "ESBZRecruitmentLeadership_LeadershipPolicy.h"
#include "ESBZRecruitmentLeadership_RecruitmenyPolicy.h"
#include "ESBZRecruitmentLeadership_RetainLeaderPolicy.h"
#include "SBZRecruitmentPolicies.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZRecruitmentPolicies {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRecruitmentLeadership_LeadershipPolicy LeaderPolicy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRecruitmentLeadership_RecruitmenyPolicy RecruitmentPolicy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRecruitmentLeadership_FollowerPolicy FollowerPolicy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRecruitmentLeadership_RetainLeaderPolicy RetainLeaderPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInidividualDeesclation;
    
    FSBZRecruitmentPolicies();
};


#include "SBZRecruitmentPolicies.h"

FSBZRecruitmentPolicies::FSBZRecruitmentPolicies() {
    this->LeaderPolicy = ESBZRecruitmentLeadership_LeadershipPolicy::None;
    this->RecruitmentPolicy = ESBZRecruitmentLeadership_RecruitmenyPolicy::AcceptAll;
    this->FollowerPolicy = ESBZRecruitmentLeadership_FollowerPolicy::KeepRecruiting;
    this->RetainLeaderPolicy = ESBZRecruitmentLeadership_RetainLeaderPolicy::ResetLeaderInNonRecruitingStates;
    this->bAllowInidividualDeesclation = false;
}


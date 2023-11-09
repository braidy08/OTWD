#include "OTWDBTService_ReFUpdateFollowing.h"

void UOTWDBTService_ReFUpdateFollowing::OnFollowerStatusChanged(EHumanFollowerStatus NewStatus, ASBZCharacter* ByCharacter) {
}

UOTWDBTService_ReFUpdateFollowing::UOTWDBTService_ReFUpdateFollowing() {
    this->Unsampled2DLimitDistance = 1;
    this->MaxPathLengthToFollowed = 1;
    this->IntervalOnWaiting = 1;
    this->FollowerController = NULL;
    this->Follower = NULL;
    this->FollowedCharacter = NULL;
}


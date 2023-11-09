#include "SBZCompositeGameplayAbilityQuery.h"

FSBZCompositeGameplayAbilityQuery::FSBZCompositeGameplayAbilityQuery() {
    this->MatchType = EGameplayContainerMatchType::Any;
    this->bUseFirstFailedMessage = false;
    this->FailedIcon = NULL;
}


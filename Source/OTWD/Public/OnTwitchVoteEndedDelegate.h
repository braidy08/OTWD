#pragma once
#include "CoreMinimal.h"
#include "VoteEnd.h"
#include "OnTwitchVoteEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTwitchVoteEnded, const FVoteEnd, TwitchVoteEnd, const float, DelayBetweenVotes);


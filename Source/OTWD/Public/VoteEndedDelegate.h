#pragma once
#include "CoreMinimal.h"
#include "VoteEnd.h"
#include "VoteEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVoteEnded, const FVoteEnd, VotingEnd);


#pragma once
#include "CoreMinimal.h"
#include "VoteChange.h"
#include "VoteChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVoteChanged, const FVoteChange, VotingChange);


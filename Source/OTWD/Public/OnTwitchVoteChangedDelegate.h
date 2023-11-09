#pragma once
#include "CoreMinimal.h"
#include "VoteChange.h"
#include "OnTwitchVoteChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTwitchVoteChanged, const FVoteChange, TwitchVoteChange);


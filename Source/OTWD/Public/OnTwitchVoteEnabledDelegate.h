#pragma once
#include "CoreMinimal.h"
#include "OnTwitchVoteEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTwitchVoteEnabled, const float, DelayBeforeOpenVote);


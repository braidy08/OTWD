#pragma once
#include "CoreMinimal.h"
#include "VoteConfig.h"
#include "OnTwitchVoteOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTwitchVoteOpened, const FVoteConfig, TwitchVoteConfig);


#pragma once
#include "CoreMinimal.h"
#include "SBZNetStruct.h"
#include "OnMissionRewardReceivedDelegate.generated.h"

class ASBZPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionRewardReceived, ASBZPlayerState*, PlayerState, const FSBZNetStruct&, MissionReward);


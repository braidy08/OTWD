#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OTWDLobbyRewardInfo.h"
#include "OTWDLobbyRewardsInfo.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDLobbyRewardsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDLobbyRewardInfo MissionReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDLobbyRewardInfo ExtractedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDLobbyRewardInfo QuestReward;
    
    FOTWDLobbyRewardsInfo();
};


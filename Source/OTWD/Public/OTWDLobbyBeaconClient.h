#pragma once
#include "CoreMinimal.h"
#include "SBZLobbyBeaconClient.h"
#include "OTWDLobbyRewardsInfo.h"
#include "OTWDLobbyStatsInfo.h"
#include "OTWDLobbyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDLobbyBeaconClient : public ASBZLobbyBeaconClient {
    GENERATED_BODY()
public:
    AOTWDLobbyBeaconClient();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateStats(const FOTWDLobbyStatsInfo& RewardInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateOpenedRewards(const FOTWDLobbyRewardsInfo& RewardInfo);
    
};


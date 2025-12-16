#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZLobbyBeaconClient -FallbackName=SBZLobbyBeaconClient
#include "OTWDLobbyRewardsInfo.h"
#include "OTWDLobbyStatsInfo.h"
#include "OTWDLobbyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDLobbyBeaconClient : public ASBZLobbyBeaconClient {
    GENERATED_BODY()
public:
    AOTWDLobbyBeaconClient(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateStats(const FOTWDLobbyStatsInfo& RewardInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateOpenedRewards(const FOTWDLobbyRewardsInfo& RewardInfo);
    
};


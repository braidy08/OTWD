#pragma once
#include "CoreMinimal.h"
#include "SBZLobbyRemoteState.h"
#include "OTWDLobbyRewardsInfo.h"
#include "OTWDLobbyStatsInfo.h"
#include "OTWDLobbyRemoteState.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDLobbyRemoteState : public ASBZLobbyRemoteState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RewardsInfo, meta=(AllowPrivateAccess=true))
    TArray<FOTWDLobbyRewardsInfo> RewardsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StatsInfo, meta=(AllowPrivateAccess=true))
    TArray<FOTWDLobbyStatsInfo> StatsInfo;
    
    AOTWDLobbyRemoteState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StatsInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RewardsInfo();
    
};


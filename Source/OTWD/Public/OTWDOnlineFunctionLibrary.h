#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZRewardType.h"
#include "OTWDLobbyRewardsInfo.h"
#include "OTWDLobbyStatsInfo.h"
#include "OTWDWeaponSavedData.h"
#include "OTWDOnlineFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class OTWD_API UOTWDOnlineFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDOnlineFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenWeaponReward(const UObject* WorldContextObject, const ESBZRewardType& RewardType, const FOTWDWeaponSavedData& SaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerOnTwitch(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FOTWDLobbyStatsInfo GetLobbyStatsPerPlayer(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FOTWDLobbyStatsInfo> GetLobbyStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FOTWDLobbyRewardsInfo> GetLobbyRewards(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FOTWDLobbyRewardsInfo GetLobbyReward(const UObject* WorldContextObject, int32 PlayerIndex);
    
};


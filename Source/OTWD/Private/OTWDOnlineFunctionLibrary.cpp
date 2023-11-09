#include "OTWDOnlineFunctionLibrary.h"

void UOTWDOnlineFunctionLibrary::OpenWeaponReward(const UObject* WorldContextObject, const ESBZRewardType& RewardType, const FOTWDWeaponSavedData& SaveData) {
}

bool UOTWDOnlineFunctionLibrary::IsPlayerOnTwitch(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

FOTWDLobbyStatsInfo UOTWDOnlineFunctionLibrary::GetLobbyStatsPerPlayer(const UObject* WorldContextObject, int32 PlayerIndex) {
    return FOTWDLobbyStatsInfo{};
}

TArray<FOTWDLobbyStatsInfo> UOTWDOnlineFunctionLibrary::GetLobbyStats(const UObject* WorldContextObject) {
    return TArray<FOTWDLobbyStatsInfo>();
}

TArray<FOTWDLobbyRewardsInfo> UOTWDOnlineFunctionLibrary::GetLobbyRewards(const UObject* WorldContextObject) {
    return TArray<FOTWDLobbyRewardsInfo>();
}

FOTWDLobbyRewardsInfo UOTWDOnlineFunctionLibrary::GetLobbyReward(const UObject* WorldContextObject, int32 PlayerIndex) {
    return FOTWDLobbyRewardsInfo{};
}

UOTWDOnlineFunctionLibrary::UOTWDOnlineFunctionLibrary() {
}


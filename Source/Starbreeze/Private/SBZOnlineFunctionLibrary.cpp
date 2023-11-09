#include "SBZOnlineFunctionLibrary.h"

void USBZOnlineFunctionLibrary::UnmutePlayer(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
}

void USBZOnlineFunctionLibrary::StopMatchmaking(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::StartMatchmaking(UObject* WorldContextObject, const FSBZOnlineMatchmakingParams& MatchmakingParameters) {
}

void USBZOnlineFunctionLibrary::SetLocalClientReady(UObject* WorldContextObject, bool bIsClientReady) {
}

void USBZOnlineFunctionLibrary::MutePlayer(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
}

bool USBZOnlineFunctionLibrary::IsUserOnline(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsTitleOnline(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsSameUniqueId(FUniqueNetIdRepl UniqueNetIdA, FUniqueNetIdRepl UniqueNetIdB) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsRequestInProgress(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsProductOwned(int32 ProductId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPlayerPartyOwner(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPlayerMuted(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPlayerInParty(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPartyOwner(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsPartyClient(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsOwnUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsMatchmakingInProgress(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLocalPlayerInDropInLobby(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLocalClientReady(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLobbyHost(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsLobbyClient(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsInSession(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsInParty(UObject* WorldContextObject) {
    return false;
}

bool USBZOnlineFunctionLibrary::IsActionPhaseClient(UObject* WorldContextObject) {
    return false;
}

void USBZOnlineFunctionLibrary::HideSessionFromJoin(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::GoToLobby(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::GetUiLobbyInfo(UObject* WorldContextObject, TArray<FSBZLobbyCharacterInfoUi>& OutInfo) {
}

EOnlineSessionInfo USBZOnlineFunctionLibrary::GetSessionInfo(UObject* WorldContextObject) {
    return EOnlineSessionInfo::Initial;
}

int32 USBZOnlineFunctionLibrary::GetRestartMatchTimeout(UObject* WorldContextObject) {
    return 0;
}

FText USBZOnlineFunctionLibrary::GetPlayerDisplayNameByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return FText::GetEmpty();
}

UTexture2D* USBZOnlineFunctionLibrary::GetPlayerAvatarByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId) {
    return NULL;
}

UTexture2D* USBZOnlineFunctionLibrary::GetPlayerAvatar(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

int32 USBZOnlineFunctionLibrary::GetPartyMembersCount(UObject* WorldContextObject) {
    return 0;
}

UTexture2D* USBZOnlineFunctionLibrary::GetPartyMemberAvatar(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ESBZOnlineJoinType USBZOnlineFunctionLibrary::GetPartyJoinType(UObject* WorldContextObject) {
    return ESBZOnlineJoinType::Debug;
}

bool USBZOnlineFunctionLibrary::GetPartyData(UObject* WorldContextObject, FSBZPartyData& OutPartyData) {
    return false;
}

FSBZOnlineMatchmakingParams USBZOnlineFunctionLibrary::GetMatchmakingParameters(UObject* WorldContextObject) {
    return FSBZOnlineMatchmakingParams{};
}

int32 USBZOnlineFunctionLibrary::GetLobbyTimeout(UObject* WorldContextObject) {
    return 0;
}

int32 USBZOnlineFunctionLibrary::GetFoundPlayersCount(UObject* WorldContextObject) {
    return 0;
}

void USBZOnlineFunctionLibrary::GetAllPlayersUniqueNetIds(UObject* WorldContextObject, TArray<FUniqueNetIdRepl>& OutParam) {
}

int32 USBZOnlineFunctionLibrary::GetAcceptMatchTimeout(UObject* WorldContextObject) {
    return 0;
}

void USBZOnlineFunctionLibrary::DebugJoinByInvite(UObject* WorldContextObject, const FSBZOnlineSearchResult& InSessionToJoin) {
}

void USBZOnlineFunctionLibrary::ActivateSessionInviteOverlay(UObject* WorldContextObject) {
}

void USBZOnlineFunctionLibrary::ActivateProfileOverlay(UObject* WorldContextObject, FUniqueNetIdRepl PlayerId) {
}

void USBZOnlineFunctionLibrary::ActivatePartyInviteOverlay(UObject* WorldContextObject) {
}

USBZOnlineFunctionLibrary::USBZOnlineFunctionLibrary() {
}


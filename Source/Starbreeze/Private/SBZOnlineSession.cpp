#include "SBZOnlineSession.h"

void USBZOnlineSession::StopMatchmaking() {
}

void USBZOnlineSession::StartMatchmaking(const FSBZOnlineMatchmakingParams& MatchmakingParameters) {
}

void USBZOnlineSession::SetLocalClientReady(bool bIsClientReady) {
}

void USBZOnlineSession::RequestMatchmaking(const FSBZOnlineMatchmakingParams& MatchmakingParameters) {
}

bool USBZOnlineSession::IsRequestInProgress() const {
    return false;
}

bool USBZOnlineSession::IsPartyOwner() const {
    return false;
}

bool USBZOnlineSession::IsPartyClient() const {
    return false;
}

bool USBZOnlineSession::IsMatchmakingInProgress() const {
    return false;
}

bool USBZOnlineSession::IsLocalClientReady() const {
    return false;
}

bool USBZOnlineSession::IsLobbyHost() const {
    return false;
}

bool USBZOnlineSession::IsLobbyClient() const {
    return false;
}

bool USBZOnlineSession::IsInSession() const {
    return false;
}

bool USBZOnlineSession::IsInParty() const {
    return false;
}

bool USBZOnlineSession::IsActionPhaseHost() const {
    return false;
}

bool USBZOnlineSession::IsActionPhaseClient() const {
    return false;
}

void USBZOnlineSession::HandleOnlinePlatformErrorPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType) {
}

void USBZOnlineSession::HandleOnlinePlatformError(ESBZOnlineSessionRequestType RequestType) {
}

TArray<FSBZLobbyCharacterInfoUi> USBZOnlineSession::GetUiLobbyInfo() {
    return TArray<FSBZLobbyCharacterInfoUi>();
}

ESBZOnlineSessionPhase USBZOnlineSession::GetSessionPhase() const {
    return ESBZOnlineSessionPhase::Undefined;
}

EOnlineSessionInfo USBZOnlineSession::GetSessionInfo() const {
    return EOnlineSessionInfo::Initial;
}

FText USBZOnlineSession::GetPlayerDisplayName(FUniqueNetIdRepl PlayerId) {
    return FText::GetEmpty();
}

int32 USBZOnlineSession::GetPartyMembersCount() {
    return 0;
}

int32 USBZOnlineSession::GetLobbyTimeout() {
    return 0;
}

USBZLobbyLocalState* USBZOnlineSession::GetLobbyState() {
    return NULL;
}

int32 USBZOnlineSession::GetFoundPlayersCount() {
    return 0;
}

USBZOnlineSession::USBZOnlineSession() {
    this->GameSearchKeyword = TEXT("OTWD");
    this->bHostPartyByDefault = true;
    this->OnlinePlatformErrorPopup = NULL;
    this->SessionRequestTimeoutDuration = 1;
}


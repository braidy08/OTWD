#include "OTWDMissionState.h"
#include "Net/UnrealNetwork.h"

void AOTWDMissionState::RequestCanPlaceFortificationCheck() {
}

void AOTWDMissionState::OnRep_HordeManager() {
}

void AOTWDMissionState::OnPlayerReceivedMissionReward(ASBZPlayerState* PlayerState, const FSBZNetStruct& MissionReward) {
}

void AOTWDMissionState::Multicast_TwitchWelcomeAlert_Implementation() {
}

void AOTWDMissionState::Multicast_TwitchVoteOpened_Implementation(const FVoteConfig TwitchVoteConfig) {
}

void AOTWDMissionState::Multicast_TwitchVoteEnded_Implementation(const FVoteEnd TwitchVoteEnd, const float DelayToNextVote) {
}

void AOTWDMissionState::Multicast_TwitchVoteEnabled_Implementation(const float DelayBeforeOpenVote) {
}

void AOTWDMissionState::Multicast_TwitchVoteChanged_Implementation(const FVoteChange TwitchVoteChange) {
}

void AOTWDMissionState::Multicast_ShowTwitchUI_Implementation() {
}

void AOTWDMissionState::Multicast_SetMegaJamming_Implementation(const bool bMegaJamming, const float autoOff) {
}

AOTWDHordeManager* AOTWDMissionState::GetHordeManager() const {
    return NULL;
}

AOTWDGameIntensityAnalyzer* AOTWDMissionState::GetGameIntensityAnalyzer() {
    return NULL;
}

void AOTWDMissionState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDMissionState, GameplayTags);
    DOREPLIFETIME(AOTWDMissionState, HordeManager);
}

AOTWDMissionState::AOTWDMissionState() {
    this->TwitchVotingUIClass = NULL;
    this->HordeManagerClass = NULL;
    this->GameIntensityAnalyzerClass = NULL;
    this->GameIntensityAnalyzer = NULL;
    this->HordeManager = NULL;
}


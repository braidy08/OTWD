#include "OTWDGameIntensityAnalyzer.h"

AOTWDGameIntensityAnalyzer::AOTWDGameIntensityAnalyzer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoiceSwitchGroup = TEXT("char_state");
    this->MusicSwitchGroup = TEXT("music_switch");
    this->StealthRPC = TEXT("stealth_tension");
    this->NeutralRPC = TEXT("neutral_tension");
    this->MaxEnemiesNearBy = 0;
    this->EnemiesNearByRadius = 0;
    this->MaxTargetedByAlertedEnemies = 0;
    this->DefeatedMusicRTPC = 1;
    this->EnterCombatFeedback = NULL;
}

void AOTWDGameIntensityAnalyzer::OnTargetInfoUpdated(ASBZPlayerCharacter* PlayerCharacter, int32 TargetedByAggroEnemies, int32 TargetedByAlertEnemies) {
}

void AOTWDGameIntensityAnalyzer::OnPlayerStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}

AOTWDGameIntensityAnalyzer* AOTWDGameIntensityAnalyzer::GetGameIntensityAnalyzer(UObject* WorldContextObject) {
    return NULL;
}



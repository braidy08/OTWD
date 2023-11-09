#include "OTWDDefenceGameState.h"
#include "Net/UnrealNetwork.h"

void AOTWDDefenceGameState::UpdateFortifications(bool bForceUpdate) {
}

void AOTWDDefenceGameState::StartDefenceHudTimer(float Duration) {
}

void AOTWDDefenceGameState::SetWaveNumber(int32 Val) {
}

void AOTWDDefenceGameState::SetStrikeNumber(int32 Val) {
}

void AOTWDDefenceGameState::SetShowFailing(bool bVal) {
}

void AOTWDDefenceGameState::SetShowDefenceHud(bool bVal) {
}

void AOTWDDefenceGameState::SetNumberDefencePointStates(int32 Num) {
}

void AOTWDDefenceGameState::SetMaxWaveNumber(int32 Val) {
}

void AOTWDDefenceGameState::SetMaxStrikeNumber(int32 Val) {
}

void AOTWDDefenceGameState::SetEndGame(bool bWin) {
}

void AOTWDDefenceGameState::SetDefencePointState(int32 ID, EOTWDDefencePointState State) {
}

void AOTWDDefenceGameState::SetDefenceMode(EOTWDDefenceMode Mode) {
}

void AOTWDDefenceGameState::OnRep_WaveNumber() {
}

void AOTWDDefenceGameState::OnRep_WaveMaxNumber() {
}

void AOTWDDefenceGameState::OnRep_UpdateDefencePhase() {
}

void AOTWDDefenceGameState::OnRep_StrikeNumber() {
}

void AOTWDDefenceGameState::OnRep_StrikeMaxNumber() {
}

void AOTWDDefenceGameState::OnRep_ShowFailing() {
}

void AOTWDDefenceGameState::OnRep_ShowDefenceHud() {
}

void AOTWDDefenceGameState::OnRep_IsWin() {
}

void AOTWDDefenceGameState::OnRep_Fortifications() {
}

void AOTWDDefenceGameState::OnRep_DefenceTimeEnd() {
}

void AOTWDDefenceGameState::OnRep_DefencePointStates() {
}

void AOTWDDefenceGameState::OnRep_DefenceMode() {
}

bool AOTWDDefenceGameState::HasFortificationType(const FGameplayTag& TagToCheck) const {
    return false;
}

void AOTWDDefenceGameState::HandleStateEntered(FName StateName) {
}

void AOTWDDefenceGameState::HandleGameReady() {
}

int32 AOTWDDefenceGameState::GetSpikeTrapUses() const {
    return 0;
}

int32 AOTWDDefenceGameState::GetSpikeTrapBonusUses() const {
    return 0;
}

int32 AOTWDDefenceGameState::GetScrapCannonUses() const {
    return 0;
}

int32 AOTWDDefenceGameState::GetScrapCannonBonusUses() const {
    return 0;
}

FOTWDDefenceFortifications AOTWDDefenceGameState::GetFortificationValues() const {
    return FOTWDDefenceFortifications{};
}

int32 AOTWDDefenceGameState::GetExplosiveBarrelUses() const {
    return 0;
}

int32 AOTWDDefenceGameState::GetExplosiveBarrelBonusUses() const {
    return 0;
}

EOTWDDefencePointState AOTWDDefenceGameState::GetDefencePointState(int32 ID, EOTWDDefencePointState DefaultValue) {
    return EOTWDDefencePointState::Safe;
}

float AOTWDDefenceGameState::GetDefenceHudTimeRemaining() {
    return 0.0f;
}

int32 AOTWDDefenceGameState::GetBarrierUses() const {
    return 0;
}

int32 AOTWDDefenceGameState::GetBarrierBonusUses() const {
    return 0;
}

int32 AOTWDDefenceGameState::GetBarbedWireUses() const {
    return 0;
}

int32 AOTWDDefenceGameState::GetBarbedWireBonusUses() const {
    return 0;
}

void AOTWDDefenceGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDDefenceGameState, bIsWin);
    DOREPLIFETIME(AOTWDDefenceGameState, DefenceTimeEnd);
    DOREPLIFETIME(AOTWDDefenceGameState, DefencePointStates);
    DOREPLIFETIME(AOTWDDefenceGameState, WaveNumber);
    DOREPLIFETIME(AOTWDDefenceGameState, MaxWaveNumber);
    DOREPLIFETIME(AOTWDDefenceGameState, MaxStrikeNumber);
    DOREPLIFETIME(AOTWDDefenceGameState, StrikeNumber);
    DOREPLIFETIME(AOTWDDefenceGameState, bShowDefenceHud);
    DOREPLIFETIME(AOTWDDefenceGameState, bShowFailing);
    DOREPLIFETIME(AOTWDDefenceGameState, Fortifications);
    DOREPLIFETIME(AOTWDDefenceGameState, CurrentDefencePhase);
    DOREPLIFETIME(AOTWDDefenceGameState, CurrentDefenceMode);
}

AOTWDDefenceGameState::AOTWDDefenceGameState() {
    this->bIsWin = false;
    this->DefenceTimeEnd = 1;
    this->WaveNumber = 0;
    this->MaxWaveNumber = 0;
    this->MaxStrikeNumber = 0;
    this->StrikeNumber = 0;
    this->bShowDefenceHud = false;
    this->bShowFailing = false;
    this->VoiceSwitchGroup = TEXT("char_state");
    this->MusicSwitchGroup = TEXT("music_switch");
    this->CurrentDefencePhase = EOTWDDefencePhase::Preparation;
    this->CurrentDefenceMode = EOTWDDefenceMode::Military;
}


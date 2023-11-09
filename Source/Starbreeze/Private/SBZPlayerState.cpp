#include "SBZPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SBZStatistics.h"
#include "Templates/SubclassOf.h"

void ASBZPlayerState::ServerSetReadyState_Implementation() {
}
bool ASBZPlayerState::ServerSetReadyState_Validate() {
    return true;
}

void ASBZPlayerState::ServerSetCinematicState_Implementation(bool bCinematicState) {
}
bool ASBZPlayerState::ServerSetCinematicState_Validate(bool bCinematicState) {
    return true;
}

void ASBZPlayerState::ServerSetAsyncLoadingState_Implementation(bool bInAsyncLoadingComplete) {
}
bool ASBZPlayerState::ServerSetAsyncLoadingState_Validate(bool bInAsyncLoadingComplete) {
    return true;
}

void ASBZPlayerState::ServerSetAsyncLoadingProgress_Implementation(float InAsyncLoadingProgress) {
}
bool ASBZPlayerState::ServerSetAsyncLoadingProgress_Validate(float InAsyncLoadingProgress) {
    return true;
}

void ASBZPlayerState::OnRep_WeaponConfigurations() {
}

void ASBZPlayerState::OnRep_Techs() {
}

void ASBZPlayerState::OnRep_ReadyState() {
}

void ASBZPlayerState::OnRep_PawnClass() {
}

void ASBZPlayerState::OnRep_Cosmetics() {
}

void ASBZPlayerState::OnRep_AsyncLoadingProgress() {
}

void ASBZPlayerState::OnRep_ActionPhaseState() {
}

void ASBZPlayerState::OnRep_Abilities() {
}

void ASBZPlayerState::OnCinematicStateChanged() {
}

void ASBZPlayerState::NetMulticast_SetRespawnTimer_Implementation(float InRespawnTimer) {
}

void ASBZPlayerState::NetMulticast_SendSBZGameStatistics_Implementation(const FSBZCollectedGameStatistics& SBZGameStatistics) {
}

void ASBZPlayerState::NetMulticast_SendMissionReward_Implementation(const FSBZNetStruct& MissionReward) {
}

void ASBZPlayerState::HandleCinematicStopped() {
}

void ASBZPlayerState::HandleCinematicStarted() {
}

void ASBZPlayerState::HandleAsyncLoadProgressUpdated(float InAsyncLoadingProgress) {
}

FUniqueNetIdRepl ASBZPlayerState::GetUniqueNetId() const {
    return FUniqueNetIdRepl{};
}

float ASBZPlayerState::GetRemainingRespawnTime() const {
    return 0.0f;
}

bool ASBZPlayerState::GetIsInCinematic() const {
    return false;
}

float ASBZPlayerState::GetAsyncLoadProgress() const {
    return 0.0f;
}

TArray<TSubclassOf<UGameplayAbility>> ASBZPlayerState::GetAbilityLoadout() const {
    return TArray<TSubclassOf<UGameplayAbility>>();
}

void ASBZPlayerState::ClientStartCinematic_Implementation(const FString& MapURL) {
}

void ASBZPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerState, WeaponCheatFlags);
    DOREPLIFETIME(ASBZPlayerState, bIsInCinematic);
    DOREPLIFETIME(ASBZPlayerState, bReady);
    DOREPLIFETIME(ASBZPlayerState, bAsyncLoadingComplete);
    DOREPLIFETIME(ASBZPlayerState, bActionPhaseStarted);
    DOREPLIFETIME(ASBZPlayerState, AsyncLoadingProgress);
    DOREPLIFETIME(ASBZPlayerState, PawnClass);
    DOREPLIFETIME(ASBZPlayerState, WeaponSlotConfigurations);
    DOREPLIFETIME(ASBZPlayerState, Abilities);
    DOREPLIFETIME(ASBZPlayerState, Techs);
    DOREPLIFETIME(ASBZPlayerState, Cosmetics);
}

ASBZPlayerState::ASBZPlayerState() {
    this->WeaponCheatFlags = ESBZWeaponCheatFlags::None;
    this->bIsInCinematic = false;
    this->bReady = false;
    this->bAsyncLoadingComplete = false;
    this->bActionPhaseStarted = false;
    this->AsyncLoadingProgress = 1;
    this->GameplayStatistics = CreateDefaultSubobject<USBZStatistics>(TEXT("Gameplay_Statistics"));
    this->PawnClass = NULL;
}


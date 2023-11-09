#include "SBZGameInstance.h"
#include "SBZMissionSaveData.h"
#include "SBZProfileSaveData.h"
#include "SBZUISaveData.h"

bool USBZGameInstance::UnlockMission(USBZLevelSchematic* InLevelToUnlock, bool bShouldUnlockMission) {
    return false;
}

void USBZGameInstance::StopAmbient() {
}

bool USBZGameInstance::ShouldSkipMissionReport() const {
    return false;
}

void USBZGameInstance::SetSelectedMissionSchematic(USBZLevelSchematic* InSelectedMissionSchematic) {
}

void USBZGameInstance::SetNewForcedGeneratedSeed(const UObject* WorldContextObject, const FString& SeedString) {
}

void USBZGameInstance::SetNewForcedGeneratedData(const UObject* WorldContextObject, const FString& DataString) {
}

void USBZGameInstance::SelectDifficulty(ESBZDifficulty Difficulty) {
}

void USBZGameInstance::SaveGame(float DeferTime) {
}

void USBZGameInstance::ReturnToMainMenu(ESBZReturnToMainMenuReason Reason) {
}

void USBZGameInstance::RestartFromLobby() {
}

void USBZGameInstance::RequestSoloGame(USBZLevelSchematic* Schematic, ESBZDifficulty Difficulty) {
}

void USBZGameInstance::RequestReturnToMainMenu() {
}

void USBZGameInstance::RequestReturnToIIS(ESBZReturnToIISReason Reason) {
}

void USBZGameInstance::RequestGameStart() {
}

void USBZGameInstance::PlayAmbient(UAkAudioEvent* AudioEvent, const UObject* WorldContextObject, bool bStopCurrent) {
}

void USBZGameInstance::OnLoggedOutAmbiguouslyPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType) {
}

void USBZGameInstance::LoadLocalProfileSaveData() {
}

bool USBZGameInstance::IsGatheringMetrics() {
    return false;
}

void USBZGameInstance::HandleNetworkReconnectPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType) {
}

void USBZGameInstance::HandleNetworkReconnect() {
}

void USBZGameInstance::HandleNetworkDisconnectPopupInteraction(const FName ActionName, ESBZButtonInputType ButtonType) {
}

void USBZGameInstance::HandleNetworkDisconnect() {
}

void USBZGameInstance::HandleGameStateLeft(FName StateName) {
}

void USBZGameInstance::HandleGameStateEntered(FName StateName) {
}

USBZUserManager* USBZGameInstance::GetUserManager() const {
    return NULL;
}

USBZUIWidgetLibrary* USBZGameInstance::GetUIWidgetLibrary() {
    return NULL;
}

USBZUIManager* USBZGameInstance::GetUIManager() {
    return NULL;
}

USBZSkyboundRegistrationAPI* USBZGameInstance::GetSkyboundRegistrationAPI() {
    return NULL;
}

USBZLevelSchematic* USBZGameInstance::GetSelectedMissionSchematic() {
    return NULL;
}

USBZOnlineSession* USBZGameInstance::GetSbzOnlineSession() const {
    return NULL;
}

TSet<FName> USBZGameInstance::GetMissionInventoryNames() {
    return TSet<FName>();
}

void USBZGameInstance::GetMenuEvent(const FString& EventName) {
}

USBZProfileSaveData* USBZGameInstance::GetLocalProfileSaveData() {
    return NULL;
}

USBZMissionSaveData* USBZGameInstance::GetLocalMissionSaveData(USBZLevelSchematic* MissionSchematic) {
    return NULL;
}

TEnumAsByte<ESBZGameStateMachineState> USBZGameInstance::GetGameStateMachineState(UObject* WorldContextObject) {
    return SM_NotLoggedIn;
}

FString USBZGameInstance::GetForcedGeneratedSeedAsString() {
    return TEXT("");
}

FString USBZGameInstance::GetForcedGeneratedDataAsString() {
    return TEXT("");
}

FString USBZGameInstance::GetCurrentGeneratedDataAsString() {
    return TEXT("");
}

void USBZGameInstance::DebugOnlineTravel(USBZLevelSchematic* LevelSchematic) {
}

void USBZGameInstance::ClearForcedGeneratedData(const UObject* WorldContextObject) {
}

USBZGameInstance::USBZGameInstance() {
    this->RootSchematic = NULL;
    this->UIManagerClass = NULL;
    this->UIWidgetLibraryClass = NULL;
    this->UISaveDataClass = USBZUISaveData::StaticClass();
    this->GameEventBroker = NULL;
    this->GameStateMachine = NULL;
    this->SelectedDifficutly = ESBZDifficulty::Normal;
    this->TransitionLevelSchematic = NULL;
    this->MainMenuSchematic = NULL;
    this->PlayGoSchematic = NULL;
    this->SelectedMissionSchematic = NULL;
    this->UIGlobalsSchematic = NULL;
    this->ProfileSaveDataClass = USBZProfileSaveData::StaticClass();
    this->LocalProfileSaveData = NULL;
    this->MissionSaveDataClass = USBZMissionSaveData::StaticClass();
    this->MusicManagerClass = NULL;
    this->VolumeManagerClass = NULL;
    this->ChallengeManagerClass = NULL;
    this->UIManager = NULL;
    this->UIWidgetLibrary = NULL;
    this->AnalyticsProvider = NULL;
    this->ChallengeManager = NULL;
    this->NetworkConnectionChangedPopup = NULL;
    this->LoggedOutAmbiguouslyPopup = NULL;
    this->UserManager = NULL;
    this->MusicManager = NULL;
    this->PlatformPurchasing = NULL;
    this->VolumeManager = NULL;
    this->SkyboundRegistrationAPI = NULL;
    this->ResetWebApiCooldownTime = 0;
    this->MissionEventTracker = NULL;
    this->WaitingStateAmbientEvent = NULL;
}


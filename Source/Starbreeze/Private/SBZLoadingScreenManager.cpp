#include "SBZLoadingScreenManager.h"

void USBZLoadingScreenManager::SetupLoadingScreen() {
}

void USBZLoadingScreenManager::PlayerRemoved(APlayerState* PlayerState) {
}

void USBZLoadingScreenManager::PlayerAdded(APlayerState* PlayerState) {
}

bool USBZLoadingScreenManager::IsLoadingScreenActive() const {
    return false;
}

void USBZLoadingScreenManager::HandleWaitActionPhaseFailed(ESBZGameMachineStateError ErrorReason) {
}

void USBZLoadingScreenManager::HandleWaitActionPhaseEntered() {
}

void USBZLoadingScreenManager::HandleSeamlessTravelFinished() {
}

void USBZLoadingScreenManager::HandleReturnToMainMenuWaitOtherPlayersStarted() {
}

void USBZLoadingScreenManager::HandleReturnToMainMenuStopped() {
}

void USBZLoadingScreenManager::HandleReturnToMainMenuStarted() {
}

void USBZLoadingScreenManager::HandleCinematicStopped() {
}

void USBZLoadingScreenManager::HandleCinematicStarted() {
}

void USBZLoadingScreenManager::HandleAsyncLoadStarted() {
}

void USBZLoadingScreenManager::HandleAsyncLoadProgressUpdated(float InProgress) {
}

void USBZLoadingScreenManager::HandleAsyncLoadComplete() {
}

void USBZLoadingScreenManager::HandleActionPhaseEntered() {
}

ULocalizedOverlays* USBZLoadingScreenManager::GetSubtitles(USBZLevelSchematic* Schematic, bool bWithoutCinematic) {
    return NULL;
}

void USBZLoadingScreenManager::GetRandomTutorialTip(FSBZTutorialTipDataAsset& Tooltip, FText& InTipCategoryText) {
}

UMediaSource* USBZLoadingScreenManager::GetMediaSource(USBZLevelSchematic* Schematic, bool bWithoutCinematic) {
    return NULL;
}

FSBZCinematicLoadingData USBZLoadingScreenManager::GetCinematicData(USBZLevelSchematic* Schematic) const {
    return FSBZCinematicLoadingData{};
}

void USBZLoadingScreenManager::ForceStopCinematic() {
}

USBZLoadingScreenManager::USBZLoadingScreenManager() {
    this->DefaultLoadingVideo = NULL;
    this->LoadingWidgetClass = NULL;
    this->LoadingWidget = NULL;
    this->ForceStopCinematicTime = 1;
    this->StartTipTime = 1;
    this->bIsAsyncLoadingProgress = false;
}


#include "SBZLoadingWidget.h"

void USBZLoadingWidget::StopCurrentVideo() {
}

void USBZLoadingWidget::SetupWidgets(UMediaPlayer* InMediaPlayer, UPanelWidget* InProgressContainer, UTextBlock* InProgressPercentText, UPanelWidget* InWaitingForPlayersContainer, UPanelWidget* NewTutorialTipPanel, UTextBlock* InTutorialTipCategoryText, UTextBlock* InTutorialTipText, UPanelWidget* InPartyPlayerWidgetContainer) {
}

void USBZLoadingWidget::SetSubtitleSource(ULocalizedOverlays* CurrentOverlay) {
}

void USBZLoadingWidget::PostLoadMap(UWorld* LoadedWorld) {
}

void USBZLoadingWidget::PlayLoadingVideo(UMediaSource* MediaSource, ULocalizedOverlays* SubtitlesOverlay, bool bLooping, bool bIsLevelCinematic) {
}

void USBZLoadingWidget::HandleVideoEndReached() {
}

void USBZLoadingWidget::HandleMediaOpenFailed(const FString& FailedUrl) {
}

void USBZLoadingWidget::HandleMediaOpened(const FString& OpenedUrl) {
}

void USBZLoadingWidget::HandleMediaClosed() {
}

void USBZLoadingWidget::HandleGameReady() {
}

USBZLoadingWidget::USBZLoadingWidget() {
    this->MediaPlayer = NULL;
    this->SubtitleWidgetClass = NULL;
    this->PartyClientLoadingWidgetClass = NULL;
    this->bVideoSourceOpen = false;
    this->bIsPlayingLevelCinematic = false;
    this->CurrentMediaSource = NULL;
    this->ProgressContainer = NULL;
    this->ProgressPercentText = NULL;
    this->TutorialTipPanel = NULL;
    this->TutorialTipCategoryText = NULL;
    this->TutorialTipText = NULL;
    this->WaitingForPlayersContainer = NULL;
    this->PartyPlayerWidgetContainer = NULL;
    this->SubtitleWidget = NULL;
}


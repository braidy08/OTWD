#include "SBZOverlaySubtitleWidget.h"

void USBZOverlaySubtitleWidget::UpdateText(FTimespan AtTime) {
}

void USBZOverlaySubtitleWidget::StopPlayingSubtitles() {
}

void USBZOverlaySubtitleWidget::StartPlayingSubtitles(const FString& MediaSource) {
}

void USBZOverlaySubtitleWidget::SetupWidgets(UTextBlock* SubtitleTextWidget) {
}

void USBZOverlaySubtitleWidget::SetOverlay(ULocalizedOverlays* InOverlay) {
}

void USBZOverlaySubtitleWidget::SetMediaPlayerRef(UMediaPlayer* InMediaPlayerRef) {
}

USBZOverlaySubtitleWidget::USBZOverlaySubtitleWidget() {
    this->TextWidget = NULL;
    this->CurrentOverlay = NULL;
    this->MediaPlayerRef = NULL;
}


#include "SBZPartyClientLoadingWidget.h"

void USBZPartyClientLoadingWidget::SetupWidgets(UImage* InPlayerPortrait, UImage* InCinematicWidget, UTextBlock* InCharacterNameTextWidget, UTextBlock* InProgressTextWidget) {
}

void USBZPartyClientLoadingWidget::HandleCinematicStopped() {
}

void USBZPartyClientLoadingWidget::HandleCinematicStarted() {
}

void USBZPartyClientLoadingWidget::HandleAsyncLoadProgressUpdated(float InProgress) {
}

USBZPartyClientLoadingWidget::USBZPartyClientLoadingWidget() {
    this->PlayerState = NULL;
    this->PlayerPortrait = NULL;
    this->CinematicWidget = NULL;
    this->CharacterNameTextWidget = NULL;
    this->ProgressTextWidget = NULL;
}


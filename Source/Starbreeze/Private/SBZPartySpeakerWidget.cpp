#include "SBZPartySpeakerWidget.h"

void USBZPartySpeakerWidget::SetupWidget(UImage* Icon) {
}

void USBZPartySpeakerWidget::SetupMuted() {
}

void USBZPartySpeakerWidget::SetUniuqeID(FUniqueNetIdRepl PlayerUniqueId) {
}

void USBZPartySpeakerWidget::OnPlayerTalking(FUniqueNetIdRepl PlayerId, bool IsTalking) {
}

USBZPartySpeakerWidget::USBZPartySpeakerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->VisibileTime = 1;
    this->CurrentPlayerState = NULL;
    this->Image = NULL;
    this->SpeakIcon = NULL;
    this->MuteIcon = NULL;
    this->TextMuteIcon = NULL;
}


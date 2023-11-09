#include "SBZPartyHUDWidget.h"

void USBZPartyHUDWidget::SetupWidgets(UPanelWidget* PartyPanelWidget) {
}

void USBZPartyHUDWidget::PlayerRemoved(APlayerState* PlayerState) {
}

void USBZPartyHUDWidget::PlayerAdded(APlayerState* PlayerState) {
}

void USBZPartyHUDWidget::OnMissionStateReady() {
}

USBZPartyHUDWidget::USBZPartyHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PartyMemberBlueprint = NULL;
    this->MaxPartyFrames = 0;
    this->PartyPanel = NULL;
}


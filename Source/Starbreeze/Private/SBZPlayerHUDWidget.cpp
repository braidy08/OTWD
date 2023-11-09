#include "SBZPlayerHUDWidget.h"


void USBZPlayerHUDWidget::OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}


USBZPlayerHUDWidget::USBZPlayerHUDWidget() {
    this->MarkerFadeInSpeed = 1;
    this->MarkerFadeInDelay = 1;
    this->MarkerFadeOutSpeed = 1;
    this->MarkerFadeOutDelay = 1;
    this->UIManager = NULL;
}


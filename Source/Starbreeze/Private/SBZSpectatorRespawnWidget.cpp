#include "SBZSpectatorRespawnWidget.h"

USBZSpectatorRespawnWidget::USBZSpectatorRespawnWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->RefreshRate = 1;
    this->OwnerState = NULL;
}

void USBZSpectatorRespawnWidget::SetTimerText(UTextBlock* TextWidget) {
}



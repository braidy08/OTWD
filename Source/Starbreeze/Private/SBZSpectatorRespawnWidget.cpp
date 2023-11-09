#include "SBZSpectatorRespawnWidget.h"

void USBZSpectatorRespawnWidget::SetTimerText(UTextBlock* TextWidget) {
}

USBZSpectatorRespawnWidget::USBZSpectatorRespawnWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->RefreshRate = 1;
    this->OwnerState = NULL;
}


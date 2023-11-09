#include "SBZPingWidget.h"

void USBZPingWidget::SetupWidgets(UMaterialInstanceDynamic* PingMaterialWidget, UTextBlock* PingTextWidget) {
}

USBZPingWidget::USBZPingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PingThreeBarMax = 0;
    this->PingTwoBarMax = 0;
    this->PingOneBarMax = 0;
    this->PingMaterial = NULL;
    this->PingText = NULL;
    this->CurrentPlayerState = NULL;
}


#include "SBZDeathWidget.h"

void USBZDeathWidget::SetupWidgets(UTextBlock* MinTextWidget, UTextBlock* SecsTextWidget, UPanelWidget* TextPanelWidget) {
}

void USBZDeathWidget::SetupAnimations(UWidgetAnimation* FadeInAnimation) {
}

void USBZDeathWidget::SetOwner(ASBZPlayerState* OwnerPlayerState) {
}

USBZDeathWidget::USBZDeathWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MinText = NULL;
    this->SecsText = NULL;
    this->TextPanel = NULL;
    this->OwnerState = NULL;
    this->FadeInAnim = NULL;
    this->PrevTime = 0;
}


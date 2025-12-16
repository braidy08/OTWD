#include "SBZAbilityResourceWheelElementWidget.h"

USBZAbilityResourceWheelElementWidget::USBZAbilityResourceWheelElementWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ResourceIcon = NULL;
    this->RotationPanel = NULL;
    this->ResourceTexture = NULL;
    this->RotationAngle = 1;
}

void USBZAbilityResourceWheelElementWidget::SetupWidgets(UImage* ResourceIconWidget, UCanvasPanel* RotationPanelWidget) {
}



#include "SBZAbilityResourceWheelElementWidget.h"

void USBZAbilityResourceWheelElementWidget::SetupWidgets(UImage* ResourceIconWidget, UCanvasPanel* RotationPanelWidget) {
}

USBZAbilityResourceWheelElementWidget::USBZAbilityResourceWheelElementWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ResourceIcon = NULL;
    this->RotationPanel = NULL;
    this->ResourceTexture = NULL;
    this->RotationAngle = 1;
}


#include "SBZDirectionalIndicatorWidget.h"

USBZDirectionalIndicatorWidget::USBZDirectionalIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HideFov = 1;
    this->RotationPanel = NULL;
    this->ImagePanel = NULL;
    this->OwningPlayer = NULL;
    this->OwningPawn = NULL;
}


void USBZDirectionalIndicatorWidget::SetRotationPanel(UCanvasPanel* Panel) {
}

void USBZDirectionalIndicatorWidget::SetImagePanel(UCanvasPanel* Panel) {
}



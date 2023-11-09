#include "SBZDirectionalIndicatorWidget.h"

void USBZDirectionalIndicatorWidget::SetRotationPanel(UCanvasPanel* Panel) {
}

void USBZDirectionalIndicatorWidget::SetImagePanel(UCanvasPanel* Panel) {
}

USBZDirectionalIndicatorWidget::USBZDirectionalIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HideFov = 1;
}


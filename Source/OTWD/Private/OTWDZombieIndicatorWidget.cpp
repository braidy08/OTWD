#include "OTWDZombieIndicatorWidget.h"

UOTWDZombieIndicatorWidget::UOTWDZombieIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MinScale = 1;
    this->MaxScale = 1;
    this->MinOpacity = 1;
    this->MaxOpacity = 1;
}

void UOTWDZombieIndicatorWidget::SetRotationPanel(UCanvasPanel* Panel) {
}

void UOTWDZombieIndicatorWidget::SetOpacityBorder(UBorder* Border) {
}

void UOTWDZombieIndicatorWidget::SetImagePanel(UCanvasPanel* Panel) {
}



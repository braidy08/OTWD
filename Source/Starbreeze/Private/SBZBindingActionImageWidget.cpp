#include "SBZBindingActionImageWidget.h"

USBZBindingActionImageWidget::USBZBindingActionImageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActionVisualSchematic = NULL;
    this->BindingIndex = 0;
    this->BindingKeyWidget = NULL;
}

void USBZBindingActionImageWidget::SetAction(FName Action) {
}

void USBZBindingActionImageWidget::RefreshAction() {
}



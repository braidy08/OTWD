#include "SBZActionImageWidget.h"

void USBZActionImageWidget::SetAction(FName Action) {
}

void USBZActionImageWidget::OnKeysRebound() {
}

void USBZActionImageWidget::OnControllerTypeChanged(ESBZControllerUIType Type) {
}

USBZActionImageWidget::USBZActionImageWidget() {
    this->ActionVisualSchematic = NULL;
    this->ControllerType = ESBZControllerUIType::Keyboard;
}


#include "SBZActionButtonWidget.h"

USBZActionButtonWidget::USBZActionButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ClickButton = NULL;
    this->ActionImage = NULL;
    this->ButtonText = NULL;
}

void USBZActionButtonWidget::UnbindInput() {
}

void USBZActionButtonWidget::SetupWidgets(UButton* ButtonWidget, USBZActionImageWidget* ActionImageWidget, UTextBlock* ButtonTextWidget) {
}

void USBZActionButtonWidget::SetupData(const FName& ActionName, const FText& ButtonLabelText) {
}

void USBZActionButtonWidget::OnInputPressed() {
}

void USBZActionButtonWidget::OnButtonClicked() {
}



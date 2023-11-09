#include "SBZActionButtonPanelWidget.h"

void USBZActionButtonPanelWidget::UnbindInput() {
}

void USBZActionButtonPanelWidget::SetupWidgets(UPanelWidget* ButtonPanelWidget) {
}

void USBZActionButtonPanelWidget::SetupData(const TArray<FName>& InActionNames, const TArray<FText>& InButtonLabels) {
}

void USBZActionButtonPanelWidget::OnActionButtonClicked(const FName Action, ESBZButtonInputType InputType) {
}

USBZActionButtonPanelWidget::USBZActionButtonPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActionButtonBlueprint = NULL;
    this->ButtonPanel = NULL;
}


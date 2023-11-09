#include "SBZActionTextWidget.h"

void USBZActionTextWidget::SetupWidgets(UHorizontalBox* PanelWidget) {
}

void USBZActionTextWidget::SetupTextDefaults(FName GlobalFont, FName GlobalColor, bool bRequiresUpdate) {
}

void USBZActionTextWidget::SetTextString(const FText& NewText) {
}

USBZActionTextWidget::USBZActionTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActionImageBlueprint = NULL;
    this->TextPanel = NULL;
}


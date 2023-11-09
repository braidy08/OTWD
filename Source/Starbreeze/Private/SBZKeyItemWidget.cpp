#include "SBZKeyItemWidget.h"

void USBZKeyItemWidget::SetupWidgets(UImage* IconWidget, UTextBlock* TextWidget, UWidgetAnimation* AppearAnimation, UWidgetAnimation* DisappearAnimation, UWidgetAnimation* UpdateAnimation) {
}

void USBZKeyItemWidget::OnDisappearFinished() {
}

USBZKeyItemWidget::USBZKeyItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ImageWidget = NULL;
    this->CountText = NULL;
    this->AppearAnim = NULL;
    this->DisappearAnim = NULL;
    this->UpdateAnim = NULL;
}


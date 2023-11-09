#include "SBZPickupNotificationWidget.h"

void USBZPickupNotificationWidget::SetupWidget(UTextBlock* ResourceName, UTextBlock* ResourceNumber, UImage* ResourceImage, UWidgetAnimation* NotifAnimation) {
}

void USBZPickupNotificationWidget::DisplayAttribute() {
}

USBZPickupNotificationWidget::USBZPickupNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AttName = NULL;
    this->AttNumber = NULL;
    this->AttImage = NULL;
    this->NotifAnima = NULL;
}


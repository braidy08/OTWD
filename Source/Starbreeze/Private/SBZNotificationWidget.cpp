#include "SBZNotificationWidget.h"

void USBZNotificationWidget::SetupWidgets(UTextBlock* TitleTextWidget, UTextBlock* BodyTextWidget, UCanvasPanel* ProgressContainerWidget, UTextBlock* ProgressTextWidget, UProgressBar* CurrentProgressBarWidget, UImage* IconImageWidget) {
}

USBZNotificationWidget::USBZNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TitleText = NULL;
    this->BodyText = NULL;
    this->ProgressContainer = NULL;
    this->ProgressText = NULL;
    this->CurrentProgressBar = NULL;
    this->IconImage = NULL;
    this->MaxLifespan = 1;
    this->CurrentLifespan = 1;
}


#include "SBZLifeStatusWidget.h"

USBZLifeStatusWidget::USBZLifeStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AliveStateAnim = NULL;
    this->DeadStateAnim = NULL;
    this->DeadAnim = NULL;
    this->bIsInitiallyAlive = false;
}

void USBZLifeStatusWidget::SetupWidgets(UWidgetAnimation* AliveStateAnimWidget, UWidgetAnimation* DeadStateAnimWidget, UWidgetAnimation* DeadAnimWidget) {
}

void USBZLifeStatusWidget::SetupData(bool bIsAliveInitial) {
}



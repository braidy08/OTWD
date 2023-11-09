#include "SBZTimerWidget.h"

void USBZTimerWidget::SetTimeStampAsCurrentWorldTime(float Timestamp) {
}

void USBZTimerWidget::SetTimeStamp(float Timestamp) {
}

void USBZTimerWidget::SetPaused(bool bInPaused) {
}

void USBZTimerWidget::OffsetTimeStamp(float OffsetBy) {
}

float USBZTimerWidget::GetTimeLeft() const {
    return 0.0f;
}

float USBZTimerWidget::GetTimeElapsed() const {
    return 0.0f;
}

USBZTimerWidget::USBZTimerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentTimeStamp = 1;
    this->bUseServerWorldTime = false;
    this->bPaused = false;
    this->PausedTimeStamp = 1;
    this->GameState = NULL;
}


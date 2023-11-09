#include "SBZTimerComponent.h"

void USBZTimerComponent::UpdateText_Implementation(const FString& Text) {
}

void USBZTimerComponent::TimeSet(int32 Value) {
}

void USBZTimerComponent::TimeIncrease(float Seconds) {
}

void USBZTimerComponent::TimeDecrease(float Seconds) {
}

void USBZTimerComponent::Speed(float Multiplier) {
}

void USBZTimerComponent::Show() {
}

void USBZTimerComponent::Pause() {
}

void USBZTimerComponent::Hide() {
}

void USBZTimerComponent::AttachTextComponent(UTextRenderComponent* TextRender) {
}

USBZTimerComponent::USBZTimerComponent() {
    this->Timer = 0;
    this->bCountDown = true;
    this->bShowMilliseconds = true;
}


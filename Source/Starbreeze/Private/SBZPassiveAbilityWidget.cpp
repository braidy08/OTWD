#include "SBZPassiveAbilityWidget.h"

void USBZPassiveAbilityWidget::SetupWidgets(UImage* PassiveImageWidget) {
}

void USBZPassiveAbilityWidget::SetupAnimations(UWidgetAnimation* ActiveAnimation, UWidgetAnimation* CooldownAnimation, UWidgetAnimation* ReadyAnimation) {
}

void USBZPassiveAbilityWidget::OnPassiveAbilityUpdated(APawn* Owner, ESBZPassiveAbilityState NewState) {
}

USBZPassiveAbilityWidget::USBZPassiveAbilityWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PassiveImage = NULL;
    this->ActiveAnim = NULL;
    this->CooldownAnim = NULL;
    this->ReadyAnim = NULL;
}


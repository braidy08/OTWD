#include "SBZPassiveAbilityWidget.h"

USBZPassiveAbilityWidget::USBZPassiveAbilityWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PassiveImage = NULL;
    this->ActiveAnim = NULL;
    this->CooldownAnim = NULL;
    this->ReadyAnim = NULL;
    this->ActivationAnim = NULL;
}

void USBZPassiveAbilityWidget::SetupWidgets(UImage* PassiveImageWidget) {
}

void USBZPassiveAbilityWidget::SetupAnimations(UWidgetAnimation* ActiveAnimation, UWidgetAnimation* CooldownAnimation, UWidgetAnimation* ReadyAnimation, UWidgetAnimation* ActivationAnimation) {
}

void USBZPassiveAbilityWidget::PlayActivationAnimation() {
}

void USBZPassiveAbilityWidget::OnPassiveAbilityUpdated(APawn* Owner, ESBZPassiveAbilityState NewState) {
}



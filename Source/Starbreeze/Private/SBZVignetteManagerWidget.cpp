#include "SBZVignetteManagerWidget.h"

void USBZVignetteManagerWidget::SetReviveVignette(USBZAnimatedVignetteWidget* Widget) {
}

void USBZVignetteManagerWidget::SetLowStaminaVignette(USBZAnimatedVignetteWidget* Widget) {
}

void USBZVignetteManagerWidget::SetHealthVignette(USBZHealthVignetteWidget* Widget) {
}

void USBZVignetteManagerWidget::SetDownedVignette(USBZAnimatedVignetteWidget* Widget) {
}

void USBZVignetteManagerWidget::SetDeathVignette(USBZAnimatedVignetteWidget* Widget) {
}

void USBZVignetteManagerWidget::SetBleedOutVignette(USBZAnimatedVignetteWidget* Widget) {
}

void USBZVignetteManagerWidget::OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}

USBZVignetteManagerWidget::USBZVignetteManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HealthVignette = NULL;
    this->DownedVignette = NULL;
    this->BleedOutVignette = NULL;
    this->DeathVignette = NULL;
    this->ReviveVignette = NULL;
    this->LowStaminaVignette = NULL;
    this->AbilitySystem = NULL;
}


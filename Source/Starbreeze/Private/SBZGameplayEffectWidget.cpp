#include "SBZGameplayEffectWidget.h"

void USBZGameplayEffectWidget::UnbindEvents() {
}

void USBZGameplayEffectWidget::SetAbilitySystemComponent(UAbilitySystemComponent* InSourceAbilitySystem, bool bInBindEvents) {
}

void USBZGameplayEffectWidget::RefreshUIData() {
}

void USBZGameplayEffectWidget::OnGameplayEffectAdded(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle Handle) {
}

void USBZGameplayEffectWidget::GameplayEffectStackCountChanged(FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount) {
}





void USBZGameplayEffectWidget::BindEvents() {
}

USBZGameplayEffectWidget::USBZGameplayEffectWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bBlueprintShouldGameplayEffectBeAddedEnabled = false;
}


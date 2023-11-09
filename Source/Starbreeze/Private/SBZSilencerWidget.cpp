#include "SBZSilencerWidget.h"

void USBZSilencerWidget::SetupWidgets(UProgressBar* CurrentProgressWidget, UProgressBar* BlinkProgressWidget, UProgressBar* MissingProgressWidget, UWidgetAnimation* DecreasedAnimation, UWidgetAnimation* EquippedAnimation, UWidgetAnimation* UnequippedAnimation, UWidgetAnimation* BrokenAnimation, UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation) {
}

void USBZSilencerWidget::OnWeaponPartChanged(ESBZRangedWeaponModuleType ModType, bool bWantedToEnable, ESBZRangedWeaponModuleResultType Result) {
}

void USBZSilencerWidget::OnWeaponChanged() {
}

USBZSilencerWidget::USBZSilencerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentWeapon = NULL;
    this->PlayerCharacter = NULL;
    this->CurrentProgress = NULL;
    this->BlinkProgress = NULL;
    this->MissingProgress = NULL;
    this->DecreaseAnim = NULL;
    this->EquippedAnim = NULL;
    this->UnequippedAnim = NULL;
    this->BrokenAnim = NULL;
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
}


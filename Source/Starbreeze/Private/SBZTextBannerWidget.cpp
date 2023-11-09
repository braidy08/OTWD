#include "SBZTextBannerWidget.h"

void USBZTextBannerWidget::SetupWidgets(UTextBlock* BannerTextWidget) {
}

void USBZTextBannerWidget::SetupAnimations(UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* OverrideAnimation) {
}

void USBZTextBannerWidget::OnShowHUDBannerText(FText LocalisedText, float Duration, bool bShowImmediate, UAkAudioEvent* SoundEvent) {
}

void USBZTextBannerWidget::OnFadeOutFinished() {
}

USBZTextBannerWidget::USBZTextBannerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BannerText = NULL;
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
    this->OverrideAnim = NULL;
}


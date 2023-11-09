#include "SBZPopupWidget.h"

void USBZPopupWidget::ShowPopup(const FText& Title, UUserWidget* BodyWidget, const TArray<FName>& InActionNames, const TArray<FText>& InButtonLabels, bool bImportantPopup) {
}

void USBZPopupWidget::SetupWidgets(UTextBlock* TitleTextWidget, UCanvasPanel* BodyPanelWidget, USBZActionButtonPanelWidget* ActionButtonPanelWidget) {
}

void USBZPopupWidget::SetupAnimations(UWidgetAnimation* BackgroundFadeInAnimation, UWidgetAnimation* BackgroundFadeInDefaultAnimation, UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* ShowHeaderAnimation, UWidgetAnimation* HideHeaderAnimation, UWidgetAnimation* ShowButtonAnimation, UWidgetAnimation* HideButtonAnimation) {
}

void USBZPopupWidget::OnControllerTypeChanged(ESBZControllerUIType Type) {
}

void USBZPopupWidget::OnActionPanelInteraction(const FName Action, ESBZButtonInputType InputType) {
}

void USBZPopupWidget::ClosePopup(bool bIsCritical) {
}

USBZPopupWidget::USBZPopupWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MinDisplayTime = 1;
    this->TitleText = NULL;
    this->BodyPanel = NULL;
    this->ActionButtonPanel = NULL;
    this->ControllerType = ESBZControllerUIType::Keyboard;
    this->BackgroundFadeInAnim = NULL;
    this->BackgroundFadeInDefaultAnim = NULL;
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
    this->ShowHeaderAnim = NULL;
    this->HideHeaderAnim = NULL;
    this->ShowButtonAnim = NULL;
    this->HideButtonAnim = NULL;
    this->bWasUsingCursor = false;
    this->CurrentDisplayTime = 1;
}


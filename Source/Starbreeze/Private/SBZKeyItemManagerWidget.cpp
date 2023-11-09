#include "SBZKeyItemManagerWidget.h"

void USBZKeyItemManagerWidget::SetupWidgets(UPanelWidget* PanelWidget, UImage* ImageWidget, UWidgetAnimation* ThrownAppearAnimation, UWidgetAnimation* ThrownDisappearAnimation, UWidgetAnimation* ThrownAppearDefaultAnimation, UWidgetAnimation* ThrownDisappearDefaultAnimation, UWidgetAnimation* ShowSeperatorAnimation, UWidgetAnimation* HideSeperatorAnimation) {
}

void USBZKeyItemManagerWidget::SetManagerOwner(ASBZPlayerCharacter* Owner) {
}

void USBZKeyItemManagerWidget::RemoveKeyItem(const FActiveGameplayEffect& Effect) {
}

void USBZKeyItemManagerWidget::ClearManagerOwner() {
}

USBZKeyItemManagerWidget::USBZKeyItemManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->KeyItemBlueprint = NULL;
    this->KeyItemPanel = NULL;
    this->ThrowableImageWidget = NULL;
    this->ThrownAppearAnim = NULL;
    this->ThrownDisappearAnim = NULL;
    this->ThrownAppearDefaultAnim = NULL;
    this->ThrownDisappearDefaultAnim = NULL;
    this->ShowSeperatorAnim = NULL;
    this->HideSeperatorAnim = NULL;
    this->AbilitySystem = NULL;
    this->ManagerOwner = NULL;
    this->CurrentThrownItem = NULL;
    this->bHasSeperator = false;
}


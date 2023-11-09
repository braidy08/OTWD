#include "SBZAbilityCraftingResourceWidget.h"

void USBZAbilityCraftingResourceWidget::SetupWidgets(UImage* ResourceIconWidget, UTextBlock* ResourceCountTextWidget) {
}

void USBZAbilityCraftingResourceWidget::SetupData(const FGameplayAttribute& InResourceAttribute) {
}

void USBZAbilityCraftingResourceWidget::SetupAnimations(UWidgetAnimation* ResourceAvailableAnimation, UWidgetAnimation* ResourceAvailableDefaultAnimation, UWidgetAnimation* ResourceEmptyAnimation, UWidgetAnimation* ResourceEmptyDefaultAnimation, UWidgetAnimation* ResourceAvailableToActivatedAnimation, UWidgetAnimation* ResourceActivatedToAvailableAnimation, UWidgetAnimation* ResourceActivatedToEmptyAnimation, UWidgetAnimation* ResourceChangedAnimation) {
}

USBZAbilityCraftingResourceWidget::USBZAbilityCraftingResourceWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ResourceIcon = NULL;
    this->ResourceCountText = NULL;
    this->CurrentCount = 1;
    this->bPrevInProgress = false;
    this->ResourceAvailableAnim = NULL;
    this->ResourceAvailableDefaultAnim = NULL;
    this->ResourceEmptyAnim = NULL;
    this->ResourceEmptyDefaultAnim = NULL;
    this->ResourceAvailableToActivatedAnim = NULL;
    this->ResourceActivatedToAvailableAnim = NULL;
    this->ResourceActivatedToEmptyAnim = NULL;
    this->ResourceChangedAnim = NULL;
}


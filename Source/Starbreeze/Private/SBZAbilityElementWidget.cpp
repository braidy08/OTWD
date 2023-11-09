#include "SBZAbilityElementWidget.h"

void USBZAbilityElementWidget::SetupWidgets(UImage* AbilityIconWidget, UTextBlock* AmmoTextWidget, USBZActionImageWidget* ActionImageWidget, UImage* ResourceImageWidget, UWidgetAnimation* AbilityNotUseableAnimation, UWidgetAnimation* AbilityUseableAnimation, UWidgetAnimation* AbilityNotUseableDefaultAnimation, UWidgetAnimation* AbilityUseableDefaultAnimation, UWidgetAnimation* AbilityUsedAnimation, UWidgetAnimation* AbilityCraftedAnimation, UWidgetAnimation* ResourceUpdatedAnimation, UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* AbilityFailedAnimation, UWidgetAnimation* ShowCraftableAnimation, UWidgetAnimation* HideCraftableAnimation, UWidgetAnimation* ShowCraftableDefaultAnimation, UWidgetAnimation* HideCraftableDefaultAnimation, UWidgetAnimation* AbilityActivationAnimation) {
}

USBZAbilityElementWidget::USBZAbilityElementWidget() {
    this->AbilityIcon = NULL;
    this->AmmoText = NULL;
    this->ActionImage = NULL;
    this->ResourceImage = NULL;
    this->AbilityNotUseableAnim = NULL;
    this->AbilityUseableAnim = NULL;
    this->AbilityNotUseableDefaultAnim = NULL;
    this->AbilityUseableDefaultAnim = NULL;
    this->AbilityUsedAnim = NULL;
    this->AbilityCraftedAnim = NULL;
    this->ResourceUpdatedAnim = NULL;
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
    this->ShowCraftableAnim = NULL;
    this->HideCraftableAnim = NULL;
    this->ShowCraftableDefaultAnim = NULL;
    this->HideCraftableDefaultAnim = NULL;
    this->AbilityFailedAnim = NULL;
    this->AbilityActivationAnim = NULL;
}


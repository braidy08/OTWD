#include "SBZAbilityCraftingElementWidget.h"

void USBZAbilityCraftingElementWidget::SetupWidgets(UImage* AbilityIconWidget, UMaterialInstanceDynamic* ProgressMaterialWidget, UImage* ResourceImageWidget, UCanvasPanel* ResourcePanelWidget, USBZActionImageWidget* ActionImageWidget) {
}

void USBZAbilityCraftingElementWidget::SetupAnimations(UWidgetAnimation* ShowCraftableAnimation, UWidgetAnimation* HideCraftableAnimation, UWidgetAnimation* ShowCraftableDefaultAnimation, UWidgetAnimation* HideCraftableDefaultAnimation, UWidgetAnimation* StartCraftingAnimation, UWidgetAnimation* StopCraftingAnimation, UWidgetAnimation* SuccessfulCraftAnimation) {
}

USBZAbilityCraftingElementWidget::USBZAbilityCraftingElementWidget() {
    this->ResourceWheelElementBlueprint = NULL;
    this->MaxSetupTime = 1;
    this->AbilityIcon = NULL;
    this->ProgressMaterial = NULL;
    this->ResourceImage = NULL;
    this->ResourcePanel = NULL;
    this->ActionImage = NULL;
    this->CurrentResourcesPanel = NULL;
    this->ShowCraftableAnim = NULL;
    this->HideCraftableAnim = NULL;
    this->ShowCraftableDefaultAnim = NULL;
    this->HideCraftableDefaultAnim = NULL;
    this->StartCraftingAnim = NULL;
    this->StopCraftingAnim = NULL;
    this->SuccessfulCraftAnim = NULL;
    this->bHasSetupIcons = false;
    this->bHasSetupProgressData = false;
    this->ElapsedSetupTime = 1;
    this->PrevCraftingProgress = 1;
}


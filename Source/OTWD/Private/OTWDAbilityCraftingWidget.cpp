#include "OTWDAbilityCraftingWidget.h"

void UOTWDAbilityCraftingWidget::SetupWidgets(UPanelWidget* ResourcePanelWidget, UPanelWidget* SignaturePanelWidget, UPanelWidget* SecondaryPanelWidget, UPanelWidget* ToolPanelWidget, UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation) {
}

void UOTWDAbilityCraftingWidget::SetProgress(ECraftingSlot CraftingSlot, float Progress) {
}

UOTWDAbilityCraftingWidget::UOTWDAbilityCraftingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ResourceBlueprint = NULL;
    this->CraftingElementBlueprint = NULL;
    this->ShowCraftingSoundEvent = NULL;
    this->CloseCraftingSoundEvent = NULL;
    this->ResourcePanel = NULL;
    this->SignaturePanel = NULL;
    this->SecondaryPanel = NULL;
    this->ToolPanel = NULL;
    this->SignatureAbilityElement = NULL;
    this->SecondaryAbilityElement = NULL;
    this->ToolAbilityElement = NULL;
    this->SignatureAbility = NULL;
    this->SecondaryAbility = NULL;
    this->ToolAbility = NULL;
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
    this->bIsSetup = false;
    this->bShouldShowTool = true;
}


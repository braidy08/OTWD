#include "OTWDAbilityHUDWidget.h"

void UOTWDAbilityHUDWidget::SetupWidgets(UPanelWidget* AbilityPanelWidget) {
}

void UOTWDAbilityHUDWidget::SetAbilityContainerVisibility(FName ActionName, bool bIsVisible) {
}

UOTWDAbilityHUDWidget::UOTWDAbilityHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ElementWidget = NULL;
    this->MaxSetupTime = 1;
    this->AbilityPanel = NULL;
    this->SignatureAbility = NULL;
    this->SecondaryAbility = NULL;
    this->ToolAbility = NULL;
    this->bIsSetup = false;
    this->bShouldShowTool = true;
    this->SetupElapsed = 1;
}


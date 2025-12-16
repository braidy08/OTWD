#include "OTWDPlayerHUDWidget.h"

UOTWDPlayerHUDWidget::UOTWDPlayerHUDWidget() {
    this->CraftingMenu = NULL;
    this->CampHUD = NULL;
}

void UOTWDPlayerHUDWidget::SetupWidgets(UOTWDAbilityCraftingWidget* CraftingMenuWidget, UOTWDCampHUDWidget* CampHUDWidget) {
}

UOTWDAbilityCraftingWidget* UOTWDPlayerHUDWidget::GetCraftingMenu() {
    return NULL;
}

UOTWDCampHUDWidget* UOTWDPlayerHUDWidget::GetCampHUD() {
    return NULL;
}



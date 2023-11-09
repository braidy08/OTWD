#include "OTWDPlayerHUDWidget.h"

void UOTWDPlayerHUDWidget::SetupWidgets(UOTWDAbilityCraftingWidget* CraftingMenuWidget, UOTWDCampHUDWidget* CampHUDWidget) {
}

UOTWDAbilityCraftingWidget* UOTWDPlayerHUDWidget::GetCraftingMenu() {
    return NULL;
}

UOTWDCampHUDWidget* UOTWDPlayerHUDWidget::GetCampHUD() {
    return NULL;
}

UOTWDPlayerHUDWidget::UOTWDPlayerHUDWidget() {
    this->CraftingMenu = NULL;
    this->CampHUD = NULL;
}


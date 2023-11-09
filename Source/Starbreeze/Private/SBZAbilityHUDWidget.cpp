#include "SBZAbilityHUDWidget.h"

void USBZAbilityHUDWidget::RefreshAbilities() {
}




USBZAbilityHUDWidget::USBZAbilityHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AbilitySystem = NULL;
    this->Character = NULL;
    this->CraftOneGameplayAbility = NULL;
    this->CraftTwoGameplayAbility = NULL;
}


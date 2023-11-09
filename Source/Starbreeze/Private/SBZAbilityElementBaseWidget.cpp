#include "SBZAbilityElementBaseWidget.h"
#include "Templates/SubclassOf.h"

void USBZAbilityElementBaseWidget::SetupData(TSubclassOf<UGameplayAbility> Ability, const FGameplayAttribute& AmmoAttribute, const FName& ActionName) {
}

USBZAbilityElementBaseWidget::USBZAbilityElementBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TwoResourceMaterial = NULL;
    this->ThreeResourceMaterial = NULL;
    this->FourResourceMaterial = NULL;
    this->CurrentAmmoValue = 1;
    this->ResourceMaterial = NULL;
    this->GameplayAbility = NULL;
    this->CraftAbility = NULL;
    this->AbilitySystem = NULL;
    this->bPrevCanCraft = false;
    this->bHasSetupCraftStatus = false;
}


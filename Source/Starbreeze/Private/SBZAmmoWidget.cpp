#include "SBZAmmoWidget.h"

void USBZAmmoWidget::SetupWidgets(UTextBlock* CurrentAmmoWidget, UTextBlock* SpareAmmoWidget, UTextBlock* PickupTextWidget, UImage* AmmoIconWidget, UPanelWidget* VisibilityPanelWidget, USBZAttributeProgressWidget* MeleeAmmoWidget, UWidgetAnimation* PickupAnimation, UWidgetAnimation* LowAmmoStateAnimation, UWidgetAnimation* DefaultStateAnimation, UWidgetAnimation* AppearAnimation, UWidgetAnimation* DisappearAnimation, UWidgetAnimation* CurrentAmmoDecreasedAnimation, UWidgetAnimation* CurrentAmmoIncreaseAnimation, UWidgetAnimation* ClipAmmoDecreasedAnimation, UWidgetAnimation* ClipAmmoIncreasedAnimation) {
}

void USBZAmmoWidget::OnWeaponChanged() {
}

void USBZAmmoWidget::OnAmmoPickup(ASBZPlayerCharacter* Character, ESBZWeaponFamily WeaponFamily, ESBZWeaponSlotType WeaponSlot, int32 Amount) {
}

void USBZAmmoWidget::DisplayAmmoPickup() {
}

USBZAmmoWidget::USBZAmmoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AmmoWarningPercent = 1;
    this->PrimaryAmmoTexture = NULL;
    this->SecondaryAmmoTexture = NULL;
    this->PrimarySoundEvent = NULL;
    this->SecondarySoundEvent = NULL;
    this->CurrentAmmoText = NULL;
    this->SpareAmmoText = NULL;
    this->PickupAmmoText = NULL;
    this->PickupImage = NULL;
    this->VisibilityPanel = NULL;
    this->MeleeAmmo = NULL;
    this->CurrentWeapon = NULL;
    this->PlayerCharacter = NULL;
    this->PickupAnim = NULL;
    this->LowAmmoAnim = NULL;
    this->DefaultStateAnim = NULL;
    this->PrevPlayedAnim = NULL;
    this->AppearAnim = NULL;
    this->DisappearAnim = NULL;
    this->CurrentAmmoDecreasedAnim = NULL;
    this->CurrentAmmoIncreasedAnim = NULL;
    this->ClipAmmoDecreasedAnim = NULL;
    this->ClipAmmoIncreasedAnim = NULL;
    this->DisplayAfter = 1;
}


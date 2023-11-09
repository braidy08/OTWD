#include "SBZAmmoPickupItem.h"

void ASBZAmmoPickupItem::OnPickup_Implementation(ASBZCharacter* Character) {
}

void ASBZAmmoPickupItem::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

ASBZAmmoPickupItem::ASBZAmmoPickupItem() {
    this->AmmoAmount = 0;
    this->bAddOnlyToCurrent = true;
}


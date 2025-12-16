#include "SBZAmmoPickupItem.h"

ASBZAmmoPickupItem::ASBZAmmoPickupItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmmoAmount = 0;
    this->bAddOnlyToCurrent = true;
}

void ASBZAmmoPickupItem::OnPickup_Implementation(ASBZCharacter* Character) {
}

void ASBZAmmoPickupItem::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}



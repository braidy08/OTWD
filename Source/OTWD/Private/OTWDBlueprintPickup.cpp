#include "OTWDBlueprintPickup.h"
#include "Net/UnrealNetwork.h"

AOTWDBlueprintPickup::AOTWDBlueprintPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableComponent = NULL;
    this->Instagator = NULL;
    this->bIsEnabled = true;
    this->bIsPickedUp = false;
}

void AOTWDBlueprintPickup::UpdatePickUpState_Implementation() {
}

void AOTWDBlueprintPickup::SetPickedupState_Implementation(bool bNewPickupState) {
}

bool AOTWDBlueprintPickup::IsPickupInteractionAllowed_Implementation() {
    return false;
}

void AOTWDBlueprintPickup::IsPickedUpSetter(bool bVal) {
}

void AOTWDBlueprintPickup::IsEnabledSetter(bool bVal) {
}

void AOTWDBlueprintPickup::HandleServerInteractionSuccess(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

bool AOTWDBlueprintPickup::GetShouldBeVisible_Implementation() {
    return false;
}

void AOTWDBlueprintPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDBlueprintPickup, bIsEnabled);
    DOREPLIFETIME(AOTWDBlueprintPickup, bIsPickedUp);
}



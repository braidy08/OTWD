#include "SBZCarryingComponent.h"

bool USBZCarryingComponent::UpdateCanRelease() {
    return false;
}

void USBZCarryingComponent::Server_Release_Implementation() {
}
bool USBZCarryingComponent::Server_Release_Validate() {
    return true;
}

void USBZCarryingComponent::Server_Pickup_Implementation(ASBZCharacter* Character) {
}
bool USBZCarryingComponent::Server_Pickup_Validate(ASBZCharacter* Character) {
    return true;
}

void USBZCarryingComponent::Release() {
}

void USBZCarryingComponent::Pickup(ASBZCharacter* Character) {
}

void USBZCarryingComponent::Multicast_Release_Implementation() {
}

void USBZCarryingComponent::Multicast_Pickup_Implementation(ASBZCharacter* Character) {
}

bool USBZCarryingComponent::IsCarrying() const {
    return false;
}

ASBZCharacter* USBZCarryingComponent::GetCarryingCharacter() const {
    return NULL;
}

bool USBZCarryingComponent::GetCanRelease() const {
    return false;
}

USBZCarryingComponent::USBZCarryingComponent() {
    this->bHasPickedUp = false;
    this->bChangeOwnerOnPickup = false;
    this->bEnableAIOnReleased = true;
    this->bHideTargetsWeaponOnPickup = true;
    this->BagType = NULL;
    this->OnHoldEffectClass = NULL;
    this->MaxPlacementSlopeAngle = 1;
    this->PlacementSearchDistance = 1;
}


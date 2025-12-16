#include "SBZSecurityCameraSwitcherComponent.h"

USBZSecurityCameraSwitcherComponent::USBZSecurityCameraSwitcherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
}

void USBZSecurityCameraSwitcherComponent::Server_PossessSecurityCamera_Implementation(ACharacter* Character) {
}
bool USBZSecurityCameraSwitcherComponent::Server_PossessSecurityCamera_Validate(ACharacter* Character) {
    return true;
}

void USBZSecurityCameraSwitcherComponent::PossessSecurityCamera(ACharacter* Character) {
}

void USBZSecurityCameraSwitcherComponent::Multicast_UnableToPossess_Implementation() {
}

void USBZSecurityCameraSwitcherComponent::Multicast_OnPossessSuccessful_Implementation() {
}

void USBZSecurityCameraSwitcherComponent::AddSecurityCamera(ASBZSecurityCameraPossessable* SecurityCamera) {
}



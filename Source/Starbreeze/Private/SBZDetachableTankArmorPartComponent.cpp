#include "SBZDetachableTankArmorPartComponent.h"

USBZDetachableTankArmorPartComponent::USBZDetachableTankArmorPartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DummyClass = NULL;
    this->DirectionalImpulse = 1;
    this->TorqueImpulse = 1;
    this->bUseBoneRotationOnDetach = false;
}

void USBZDetachableTankArmorPartComponent::Multicast_DetachArmorPart_Implementation() {
}



#include "SBZDetachableTankArmorPartComponent.h"

void USBZDetachableTankArmorPartComponent::Multicast_DetachArmorPart_Implementation() {
}

USBZDetachableTankArmorPartComponent::USBZDetachableTankArmorPartComponent() {
    this->DummyClass = NULL;
    this->DirectionalImpulse = 1;
    this->TorqueImpulse = 1;
    this->bUseBoneRotationOnDetach = false;
}


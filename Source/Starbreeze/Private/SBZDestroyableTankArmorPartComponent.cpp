#include "SBZDestroyableTankArmorPartComponent.h"

USBZDestroyableTankArmorPartComponent::USBZDestroyableTankArmorPartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisible = false;
    this->Particle = NULL;
}

void USBZDestroyableTankArmorPartComponent::Multicast_DestroyArmorPart_Implementation() {
}



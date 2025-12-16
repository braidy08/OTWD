#include "SBZNavMeshEventListenerComponent.h"

USBZNavMeshEventListenerComponent::USBZNavMeshEventListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bListenAlsoNextNodeChange = false;
}



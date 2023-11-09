#include "SBZReducedMeshComponent.h"

void USBZReducedMeshComponent::SetHiddenComponents(const TArray<USceneComponent*>& NewHiddenComponents) {
}

USBZReducedMeshComponent::USBZReducedMeshComponent() {
    this->bSaveGeneratedMeshWithComponent = true;
    this->bUseActorTransform = false;
    this->LODGroup = TEXT("SB_Auto");
    this->LODLevel = 0;
    this->ActivateScreenSizeNormalized = 1;
}


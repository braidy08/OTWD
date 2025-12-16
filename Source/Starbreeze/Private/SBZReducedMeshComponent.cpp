#include "SBZReducedMeshComponent.h"

USBZReducedMeshComponent::USBZReducedMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAbsoluteLocation = true;
    this->bAbsoluteRotation = true;
    this->bAbsoluteScale = true;
    this->bVisible = false;
    this->bHiddenInGame = true;
    this->Mobility = EComponentMobility::Static;
    this->bCastHiddenShadow = true;
    this->bSaveGeneratedMeshWithComponent = true;
    this->bUseActorTransform = false;
    this->LODGroup = TEXT("SB_Auto");
    this->LODLevel = 0;
    this->ActivateScreenSizeNormalized = 1;
}

void USBZReducedMeshComponent::SetHiddenComponents(const TArray<USceneComponent*>& NewHiddenComponents) {
}



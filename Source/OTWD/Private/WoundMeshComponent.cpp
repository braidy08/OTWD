#include "WoundMeshComponent.h"

UWoundMeshComponent::UWoundMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->CastShadow = false;
}



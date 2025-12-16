#include "SBZStaticBagItem.h"
#include "Components/StaticMeshComponent.h"

ASBZStaticBagItem::ASBZStaticBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->bStaticMeshReplicateMovement = true;
    this->PickedUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickedUpMesh"));
    this->OutlineComponent = NULL;
    this->PickedUpMesh->SetupAttachment(RootComponent);
}

void ASBZStaticBagItem::Remove(bool bDestroyItem) {
}

void ASBZStaticBagItem::OnRep_PickedUpState(ESBZPickedUpState OldState) {
}

void ASBZStaticBagItem::DetachWorldHiddenMultiCast_Implementation(const FTransform& DetachTransform) {
}

void ASBZStaticBagItem::DetachWorldHidden(const FTransform& DetachTransform) {
}

void ASBZStaticBagItem::AttachWorldHidden() {
}



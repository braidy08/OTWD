#include "SBZStaticBagItem.h"
#include "Components/StaticMeshComponent.h"

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

ASBZStaticBagItem::ASBZStaticBagItem() {
    this->PickedUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickedUpMesh"));
    this->OriginalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->CurrentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->OutlineComponent = NULL;
}


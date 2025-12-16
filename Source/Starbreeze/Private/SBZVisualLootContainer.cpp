#include "SBZVisualLootContainer.h"

ASBZVisualLootContainer::ASBZVisualLootContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDestroyEmptyContainer = true;
    this->bChangedRootMeshToMatchItems = true;
}

void ASBZVisualLootContainer::OnLootChanged_Implementation(const TArray<FSBZAutoPickUpItemCount>& CurrentLoot) {
}

void ASBZVisualLootContainer::NetMulticast_OnDisableLootContainer_Implementation() {
}



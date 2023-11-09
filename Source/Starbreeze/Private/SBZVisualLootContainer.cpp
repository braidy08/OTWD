#include "SBZVisualLootContainer.h"

void ASBZVisualLootContainer::OnLootChanged_Implementation(const TArray<FSBZAutoPickUpItemCount>& CurrentLoot) {
}

ASBZVisualLootContainer::ASBZVisualLootContainer() {
    this->bDestroyEmptyContainer = true;
    this->bChangedRootMeshToMatchItems = true;
}


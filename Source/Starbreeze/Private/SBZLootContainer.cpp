#include "SBZLootContainer.h"
#include "SBZLootContainerComponent.h"

ASBZLootContainer::ASBZLootContainer() {
    this->bAlreadyLooted = false;
    this->LootContainerComponent = CreateDefaultSubobject<USBZLootContainerComponent>(TEXT("LootContainerComponent"));
    this->HighlightOutlineSchematic = NULL;
    this->IsInteractableOutlineSchematic = NULL;
}


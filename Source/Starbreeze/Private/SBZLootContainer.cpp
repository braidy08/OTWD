#include "SBZLootContainer.h"
#include "SBZLootContainerComponent.h"

ASBZLootContainer::ASBZLootContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->bCanBeInCluster = false;
    this->bAlreadyLooted = false;
    this->LootContainerComponent = CreateDefaultSubobject<USBZLootContainerComponent>(TEXT("LootContainerComponent"));
    this->HighlightOutlineSchematic = NULL;
    this->IsInteractableOutlineSchematic = NULL;
}



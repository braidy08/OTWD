#include "SBZItemInventoryManagement.h"

ASBZItemInventoryManagement::ASBZItemInventoryManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryItemManagementSchematic = NULL;
}

ASBZItemInventoryManagement* ASBZItemInventoryManagement::GetItemInventoryManagement() {
    return NULL;
}

void ASBZItemInventoryManagement::DeactivateZone(const FString& ZoneName) {
}



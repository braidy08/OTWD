#include "SBZBagItem.h"

ASBZBagItem::ASBZBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BagType = NULL;
    this->bAutoSecureBagOnPickup = false;
}

void ASBZBagItem::NetMulticast_TriggerMissionEnded_Implementation() {
}


USBZBagTypeSchematic* ASBZBagItem::GetBagType() {
    return NULL;
}



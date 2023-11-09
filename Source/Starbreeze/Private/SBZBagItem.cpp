#include "SBZBagItem.h"

void ASBZBagItem::NetMulticast_TriggerMissionEnded_Implementation() {
}


USBZBagTypeSchematic* ASBZBagItem::GetBagType() {
    return NULL;
}

ASBZBagItem::ASBZBagItem() {
    this->BagType = NULL;
    this->bAutoSecureBagOnPickup = false;
}


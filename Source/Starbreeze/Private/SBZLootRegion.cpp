#include "SBZLootRegion.h"

ASBZLootRegion::ASBZLootRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LootTables[0] = NULL;
    this->LootTables[1] = NULL;
    this->LootTables[2] = NULL;
    this->LootTables[3] = NULL;
    this->RegionLootTable = NULL;
}

void ASBZLootRegion::Refresh() {
}

USBZLootTableSchematic* ASBZLootRegion::GetCurrentLootTable() {
    return NULL;
}

void ASBZLootRegion::AddNewVolume() {
}



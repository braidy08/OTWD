#include "SBZStaticMeshInstanceManager.h"

ASBZStaticMeshInstanceManager::ASBZStaticMeshInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOptimizationBatchInProgress = false;
    this->bOptimizationBatchIsAutomatic = false;
}

void ASBZStaticMeshInstanceManager::OnLevelVisibilityChanged() {
}

void ASBZStaticMeshInstanceManager::K2_EndOptimizationBatch() {
}

void ASBZStaticMeshInstanceManager::K2_BeginOptimizationBatch() {
}



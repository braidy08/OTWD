#include "SBZStaticMeshInstanceManager.h"

void ASBZStaticMeshInstanceManager::OnLevelVisibilityChanged() {
}

void ASBZStaticMeshInstanceManager::K2_EndOptimizationBatch() {
}

void ASBZStaticMeshInstanceManager::K2_BeginOptimizationBatch() {
}

ASBZStaticMeshInstanceManager::ASBZStaticMeshInstanceManager() {
    this->bOptimizationBatchInProgress = false;
    this->bOptimizationBatchIsAutomatic = false;
}


#include "SBZAlignmentSlotFlags.h"

FSBZAlignmentSlotFlags::FSBZAlignmentSlotFlags() {
    this->bPerformBlockingChecks = false;
    this->bCorrectPositionForTerrain = false;
    this->bRotateVisualsToMatchHeight = false;
    this->bRotateVisualsOfOwningTarget = false;
    this->bFirstPersonLegsTransformEnabled = false;
    this->bClearSlotWhenAligned = false;
    this->bSingleUseSlot = false;
    this->bUseTerrainHeightDuringAlignment = false;
    this->bDisableMovementReplication = false;
}


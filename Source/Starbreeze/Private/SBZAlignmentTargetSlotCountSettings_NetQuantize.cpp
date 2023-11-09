#include "SBZAlignmentTargetSlotCountSettings_NetQuantize.h"

FSBZAlignmentTargetSlotCountSettings_NetQuantize::FSBZAlignmentTargetSlotCountSettings_NetQuantize() {
    this->SlotCount = 0;
    this->SlotDistance = 1;
    this->SlotAngleDegreeOfRandomness = 1;
    this->BlockedSlotChecks = ESBZAlignSlotBlockedChecks::None;
}


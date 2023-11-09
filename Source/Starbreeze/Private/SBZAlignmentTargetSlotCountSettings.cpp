#include "SBZAlignmentTargetSlotCountSettings.h"

FSBZAlignmentTargetSlotCountSettings::FSBZAlignmentTargetSlotCountSettings() {
    this->SlotCount = 0;
    this->SlotDistance = 1;
    this->SlotAngleDegreeOfRandomness = 1;
    this->BlockedSlotChecks = ESBZAlignSlotBlockedChecks::None;
}


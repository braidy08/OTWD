#include "SBZBTDecorator_TrackDamage.h"

USBZBTDecorator_TrackDamage::USBZBTDecorator_TrackDamage() {
    this->NodeName = TEXT("Track Damage");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->bClearDamageFlag = true;
}



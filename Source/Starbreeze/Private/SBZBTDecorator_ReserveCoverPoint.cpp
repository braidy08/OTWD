#include "SBZBTDecorator_ReserveCoverPoint.h"

USBZBTDecorator_ReserveCoverPoint::USBZBTDecorator_ReserveCoverPoint() {
    this->NodeName = TEXT("Reserve CoverPoint");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->bClearTargetCoverPoint = false;
    this->bClearCurrentCoverPoint = false;
}



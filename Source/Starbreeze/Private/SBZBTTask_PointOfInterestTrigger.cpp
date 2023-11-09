#include "SBZBTTask_PointOfInterestTrigger.h"

USBZBTTask_PointOfInterestTrigger::USBZBTTask_PointOfInterestTrigger() {
    this->Action = ESBZPOITriggerAction::Trigger;
    this->bSearchForNextPOI = true;
}


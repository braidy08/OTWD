#include "SBZBTTask_PointOfInterestTrigger.h"

USBZBTTask_PointOfInterestTrigger::USBZBTTask_PointOfInterestTrigger() {
    this->NodeName = TEXT("POI Trigger");
    this->Action = ESBZPOITriggerAction::Trigger;
    this->bSearchForNextPOI = true;
}



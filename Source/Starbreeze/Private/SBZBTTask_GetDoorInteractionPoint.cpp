#include "SBZBTTask_GetDoorInteractionPoint.h"

USBZBTTask_GetDoorInteractionPoint::USBZBTTask_GetDoorInteractionPoint() {
    this->NodeName = TEXT("Get Door Interaction Point");
    this->InteractionPointType = ESBZDoorInteractionPointType::OpeningPoint;
    this->AdditionnalForwardOffset = 1;
}



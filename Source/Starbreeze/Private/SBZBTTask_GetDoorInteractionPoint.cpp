#include "SBZBTTask_GetDoorInteractionPoint.h"

USBZBTTask_GetDoorInteractionPoint::USBZBTTask_GetDoorInteractionPoint() {
    this->InteractionPointType = ESBZDoorInteractionPointType::OpeningPoint;
    this->AdditionnalForwardOffset = 1;
}


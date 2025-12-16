#include "SBZBTTask_GetWanderLocation.h"

USBZBTTask_GetWanderLocation::USBZBTTask_GetWanderLocation() {
    this->NodeName = TEXT("Get Wander Location");
    this->bUseDirectionKey = false;
    this->bUseMethodKey = false;
    this->Method = ESBZBTTask_GetWanderLocation_Method::None;
    this->Radius = 1;
}



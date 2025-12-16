#include "SBZBTTask_GetRandomLocation.h"

USBZBTTask_GetRandomLocation::USBZBTTask_GetRandomLocation() {
    this->NodeName = TEXT("Get Random Location In Radius");
    this->bUseRadiusKey = false;
    this->Radius = 1;
}



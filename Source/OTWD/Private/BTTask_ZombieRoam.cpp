#include "BTTask_ZombieRoam.h"

UBTTask_ZombieRoam::UBTTask_ZombieRoam() {
    this->bUseDirectionKey = false;
    this->bUseMethodKey = false;
    this->Method = ESBZBTTask_GetWanderLocation_Method::None;
    this->Radius = 1;
    this->bUpdateRoamingInfo = false;
    this->FilterClass = NULL;
}


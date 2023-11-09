#include "AIRoamingVolume.h"
#include "Components/BoxComponent.h"

AAIRoamingVolume::AAIRoamingVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RoamingVolumeBox"));
    this->Method = ESBZBTTask_GetWanderLocation_Method::None;
}


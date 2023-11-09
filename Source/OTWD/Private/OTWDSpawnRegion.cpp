#include "OTWDSpawnRegion.h"
#include "Components/ChildActorComponent.h"

AOTWDSpawnRegion::AOTWDSpawnRegion() {
    this->bIsCrowd = false;
    this->WanderMethod = ESBZBTTask_GetWanderLocation_Method::None;
    this->bAddZombiesToHorde = true;
    this->RoamingVolume = CreateDefaultSubobject<UChildActorComponent>(TEXT("RoamingVolume"));
}


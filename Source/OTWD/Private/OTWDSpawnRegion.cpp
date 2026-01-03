#include "OTWDSpawnRegion.h"
#include "Components/ChildActorComponent.h"

AOTWDSpawnRegion::AOTWDSpawnRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WanderMethod = ESBZBTTask_GetWanderLocation_Method::None;
    this->bCreateRoamingVolume = true;
    this->RoamingVolumeComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("RoamingVolumeComponent"));
    this->bAddZombiesToHorde = true;
    this->RoamingVolumeComponent->SetupAttachment(RootComponent);
}



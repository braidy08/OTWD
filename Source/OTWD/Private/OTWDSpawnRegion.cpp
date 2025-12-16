#include "OTWDSpawnRegion.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

AOTWDSpawnRegion::AOTWDSpawnRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WanderMethod = ESBZBTTask_GetWanderLocation_Method::None;
    this->bCreateRoamingVolume = true;
    this->RoamingVolumeComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("RoamingVolumeComponent"));
    this->bAddZombiesToHorde = true;
    this->RoamingVolumeComponent->SetupAttachment(RootComponent);
}



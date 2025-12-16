#include "AIRoamingVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AAIRoamingVolume::AAIRoamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RoamingVolumeBox"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->Method = ESBZBTTask_GetWanderLocation_Method::None;
}



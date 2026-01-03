#include "AIRoamingVolume.h"
#include "Components/BoxComponent.h"

AAIRoamingVolume::AAIRoamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RoamingVolumeBox"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->Method = ESBZBTTask_GetWanderLocation_Method::None;
}



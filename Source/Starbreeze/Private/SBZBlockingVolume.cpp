#include "SBZBlockingVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASBZBlockingVolume::ASBZBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BoxBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBlocker"));
    this->BoxBlocker->SetupAttachment(RootComponent);
}



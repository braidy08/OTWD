#include "SBZBlockingVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/SceneComponent.h"

ASBZBlockingVolume::ASBZBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BoxBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBlocker"));
    this->BoxBlocker->SetupAttachment(RootComponent);
}



#include "OTWDRegionHider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/SceneComponent.h"

AOTWDRegionHider::AOTWDRegionHider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Scene = (USceneComponent*)RootComponent;
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
    this->HideRegion = CreateDefaultSubobject<UBoxComponent>(TEXT("Hide"));
    this->ManualHideIndex = 0;
    this->UseManualHideIndex = false;
    this->HideRegion->SetupAttachment(RootComponent);
    this->TriggerArea->SetupAttachment(RootComponent);
}



#include "OTWDRegionHider.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AOTWDRegionHider::AOTWDRegionHider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
    this->HideRegion = CreateDefaultSubobject<UBoxComponent>(TEXT("Hide"));
    this->ManualHideIndex = 0;
    this->UseManualHideIndex = false;
}



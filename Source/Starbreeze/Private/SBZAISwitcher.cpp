#include "SBZAISwitcher.h"
#include "Components/SceneComponent.h"

ASBZAISwitcher::ASBZAISwitcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->UpdateRate = 1;
    this->SwitchCount = 0;
    this->SwitchDistance = 1;
    this->bUseDebugOutline = true;
    this->DebugOutlineSchematic = NULL;
}



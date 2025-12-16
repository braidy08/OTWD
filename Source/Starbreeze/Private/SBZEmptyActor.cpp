#include "SBZEmptyActor.h"
#include "Components/SceneComponent.h"

ASBZEmptyActor::ASBZEmptyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
}



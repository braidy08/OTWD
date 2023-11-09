#include "SBZEmptyActor.h"
#include "Components/SceneComponent.h"

ASBZEmptyActor::ASBZEmptyActor() {
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
}


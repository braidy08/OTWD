#include "SBZPlayerSpawnGroup.h"
#include "Components/SceneComponent.h"

ASBZPlayerSpawnGroup::ASBZPlayerSpawnGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}



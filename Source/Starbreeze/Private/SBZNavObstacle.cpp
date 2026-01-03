#include "SBZNavObstacle.h"
#include "Components/BoxComponent.h"
#include "AI/NavigationModifier.h"
#include "Components/SceneComponent.h"

ASBZNavObstacle::ASBZNavObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bStartEnable = false;
    this->EnabledNavArea = NULL;
    this->DisabledNavArea = NULL;
}

bool ASBZNavObstacle::IsEnable() const {
    return false;
}

void ASBZNavObstacle::EnableObstacle() {
}

void ASBZNavObstacle::DisableObstacle() {
}



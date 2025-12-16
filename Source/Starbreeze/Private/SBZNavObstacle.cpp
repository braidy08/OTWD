#include "SBZNavObstacle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "Components/SceneComponent.h"

ASBZNavObstacle::ASBZNavObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bStartEnable = false;
    this->EnabledNavArea = NULL;
    this->DisabledNavArea = NULL;
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(RootComponent);
}

bool ASBZNavObstacle::IsEnable() const {
    return false;
}

void ASBZNavObstacle::EnableObstacle() {
}

void ASBZNavObstacle::DisableObstacle() {
}



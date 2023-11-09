#include "SBZNavObstacle.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent

bool ASBZNavObstacle::IsEnable() const {
    return false;
}

void ASBZNavObstacle::EnableObstacle() {
}

void ASBZNavObstacle::DisableObstacle() {
}

ASBZNavObstacle::ASBZNavObstacle() {
    this->bStartEnable = false;
    this->EnabledNavArea = NULL;
    this->DisabledNavArea = NULL;
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}


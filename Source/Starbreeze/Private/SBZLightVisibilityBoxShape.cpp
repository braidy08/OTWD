#include "SBZLightVisibilityBoxShape.h"
#include "Components/BoxComponent.h"

ASBZLightVisibilityBoxShape::ASBZLightVisibilityBoxShape() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}


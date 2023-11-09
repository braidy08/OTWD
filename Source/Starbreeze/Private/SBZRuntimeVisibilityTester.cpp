#include "SBZRuntimeVisibilityTester.h"
#include "Components/BillboardComponent.h"
#include "Components/LineBatchComponent.h"

ASBZRuntimeVisibilityTester::ASBZRuntimeVisibilityTester() {
    this->SpriteComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->LineBatchComponent = CreateDefaultSubobject<ULineBatchComponent>(TEXT("LineBatchComponent"));
    this->bShowBuildDebugShapes = true;
    this->bShowSourceVisibilityDebugShapes = false;
}


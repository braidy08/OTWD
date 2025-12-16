#include "SBZRuntimeVisibilityTester.h"
#include "Components/BillboardComponent.h"
#include "Components/LineBatchComponent.h"

ASBZRuntimeVisibilityTester::ASBZRuntimeVisibilityTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->SpriteComponent = (UBillboardComponent*)RootComponent;
    this->LineBatchComponent = CreateDefaultSubobject<ULineBatchComponent>(TEXT("LineBatchComponent"));
    this->bShowBuildDebugShapes = true;
    this->bShowSourceVisibilityDebugShapes = false;
    this->LineBatchComponent->SetupAttachment(RootComponent);
}



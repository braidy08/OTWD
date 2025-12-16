#include "PathNodeResponder.h"
#include "Components/SceneComponent.h"

APathNodeResponder::APathNodeResponder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BillboardComponent = NULL;
    this->Node = NULL;
}

void APathNodeResponder::OnNodeReset() {
}

void APathNodeResponder::OnNodeDeactivated() {
}

void APathNodeResponder::OnNodeActivated(const EPathNodeActualUsage ChosenUsage) {
}



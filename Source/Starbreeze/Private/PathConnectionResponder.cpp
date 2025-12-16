#include "PathConnectionResponder.h"
#include "Components/SceneComponent.h"

APathConnectionResponder::APathConnectionResponder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BillboardComponent = NULL;
    this->StartNode = NULL;
    this->EndNode = NULL;
}

void APathConnectionResponder::OnConnectionReset() {
}

void APathConnectionResponder::OnConnectionOpened(const uint8 ChosenDirection) {
}

void APathConnectionResponder::OnConnectionClosed(const uint8 ChosenDirection, const bool bIsFullyClosed) {
}



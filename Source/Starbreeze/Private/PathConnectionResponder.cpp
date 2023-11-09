#include "PathConnectionResponder.h"

void APathConnectionResponder::OnConnectionReset() {
}

void APathConnectionResponder::OnConnectionOpened(const uint8 ChosenDirection) {
}

void APathConnectionResponder::OnConnectionClosed(const uint8 ChosenDirection, const bool bIsFullyClosed) {
}

APathConnectionResponder::APathConnectionResponder() {
    this->BillboardComponent = NULL;
    this->StartNode = NULL;
    this->EndNode = NULL;
}


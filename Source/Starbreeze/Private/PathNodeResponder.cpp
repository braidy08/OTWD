#include "PathNodeResponder.h"

void APathNodeResponder::OnNodeReset() {
}

void APathNodeResponder::OnNodeDeactivated() {
}

void APathNodeResponder::OnNodeActivated(const EPathNodeActualUsage ChosenUsage) {
}

APathNodeResponder::APathNodeResponder() {
    this->BillboardComponent = NULL;
    this->Node = NULL;
}


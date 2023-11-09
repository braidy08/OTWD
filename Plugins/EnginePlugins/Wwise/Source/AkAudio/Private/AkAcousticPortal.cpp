#include "AkAcousticPortal.h"

void AAkAcousticPortal::SetExtent(const FVector& Extent) {
}

void AAkAcousticPortal::OpenPortal(bool bForceOpen) {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal(bool bForceClose) {
}

AAkAcousticPortal::AAkAcousticPortal() {
    this->InitialState = AkAcousticPortalState::Closed;
    this->ObstructionRefreshInterval = 1;
    this->ObstructionCollisionChannel = ECC_Visibility;
}


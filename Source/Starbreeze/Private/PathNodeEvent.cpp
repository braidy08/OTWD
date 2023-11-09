#include "PathNodeEvent.h"

void APathNodeEvent::OnSetupEvent_Implementation(const UNodeEventCategory* Category, const uint8 Intensity) {
}

void APathNodeEvent::OnResetEvent_Implementation() {
}

void APathNodeEvent::OnBeginEvent_Implementation() {
}

void APathNodeEvent::NotifyEventStarted() {
}

void APathNodeEvent::NotifyEventFinished(const EPathEventFinishType FinishType) {
}

bool APathNodeEvent::DoesEventMatch_Implementation(const UNodeEventCategory* Category, const uint8 Intensity) const {
    return false;
}

APathNodeEvent::APathNodeEvent() {
    this->HostNode = NULL;
}


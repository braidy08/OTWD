#include "ConnectionData.h"

FConnectionData::FConnectionData() {
    this->Neighbor = NULL;
    this->TraversalTime = EPathTimeEstimate::Instant;
    this->State = EPathConnectionState::Uninitialized;
    this->Direction = 0;
}


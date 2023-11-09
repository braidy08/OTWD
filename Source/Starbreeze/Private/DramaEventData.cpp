#include "DramaEventData.h"

FDramaEventData::FDramaEventData() {
    this->Event = EDramaEvent::EDamageTaken;
    this->Value = 1;
    this->bLimitToValidRange = false;
}


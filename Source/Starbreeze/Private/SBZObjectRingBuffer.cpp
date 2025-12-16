#include "SBZObjectRingBuffer.h"

USBZObjectRingBuffer::USBZObjectRingBuffer() {
    this->Objects.AddDefaulted(1);
    this->bKeepSorted = true;
    this->HeadIndex = 0;
    this->DroppedElementContainer = NULL;
}



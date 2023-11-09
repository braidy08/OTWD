#include "SBZObjectRingBuffer.h"

USBZObjectRingBuffer::USBZObjectRingBuffer() {
    this->HeadIndex = 0;
    this->DroppedElementContainer = NULL;
}


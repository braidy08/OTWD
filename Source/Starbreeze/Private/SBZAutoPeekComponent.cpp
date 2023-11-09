#include "SBZAutoPeekComponent.h"

USBZAutoPeekComponent::USBZAutoPeekComponent() {
    this->bEnabled = false;
    this->ForwardCheckMinDistToWall = 1;
    this->TriggerPeekDistancePrecentage = 1;
    this->PeekPointMinClearDist = 1;
    this->ForwardCheckRadius = 1;
    this->PeekPointCheckRadius = 1;
    this->PeekAngleBuffer = 1;
    this->PeekLocationBuffer = 1;
    this->MinThicknessStart = 1;
    this->MinThicknessEnd = 1;
    this->ThicknessCheckRayCount = 0;
    this->ThicknessCheckPassCount = 0;
}


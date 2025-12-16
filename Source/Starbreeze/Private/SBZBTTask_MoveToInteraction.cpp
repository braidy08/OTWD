#include "SBZBTTask_MoveToInteraction.h"

USBZBTTask_MoveToInteraction::USBZBTTask_MoveToInteraction() {
    this->NodeName = TEXT("Move To Interaction");
    this->bNavMeshFallback = true;
    this->NavMeshFallbackSteps = 0;
}



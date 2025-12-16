#include "SBZBTTask_PerceptionMemoryAction.h"

USBZBTTask_PerceptionMemoryAction::USBZBTTask_PerceptionMemoryAction() {
    this->NodeName = TEXT("PerceptionMemoryAction");
    this->Operation = ESBZPerceptionMemoryOperation::GetLastKnownLocation;
}



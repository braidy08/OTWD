#include "SBZBTTask_ResetTimer.h"

USBZBTTask_ResetTimer::USBZBTTask_ResetTimer() {
    this->NodeName = TEXT("ResetTimer");
    this->Operation = EBTTask_ResetTimer_Operation::Start;
}



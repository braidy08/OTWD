#include "SBZBTDecorator_IsCoverSafe.h"

USBZBTDecorator_IsCoverSafe::USBZBTDecorator_IsCoverSafe() {
    this->NodeName = TEXT("Is Cover Safe");
    this->bAbortRequireAIVisibilitySystem = false;
    this->bUseAngleCheck = false;
    this->MaxAllowedAngle = 1;
}



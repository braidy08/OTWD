#include "SBZBTTask_Peek.h"

USBZBTTask_Peek::USBZBTTask_Peek() {
    this->NodeName = TEXT("Peek");
    this->bUsePeekTypeKey = true;
    this->PeekType = ESBZShootingPointType::CrouchLeft;
    this->bEnable = true;
    this->bExitingCover = false;
}



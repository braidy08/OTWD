#include "SBZBTDecorator_CloseEnough.h"

USBZBTDecorator_CloseEnough::USBZBTDecorator_CloseEnough() {
    this->NodeName = TEXT("Close Enough");
    this->AcceptableDistance = 1;
    this->bUseAcceptableDistanceKey = false;
    this->bUse2DDistance = false;
}



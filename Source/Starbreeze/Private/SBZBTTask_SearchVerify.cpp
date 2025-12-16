#include "SBZBTTask_SearchVerify.h"

USBZBTTask_SearchVerify::USBZBTTask_SearchVerify() {
    this->NodeName = TEXT("Verify Search");
    this->bIsCoverPoint = true;
    this->bCanReturnFailure = true;
    this->bUseAcceptRadius = true;
    this->AcceptRadius = 1;
}



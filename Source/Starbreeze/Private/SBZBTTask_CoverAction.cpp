#include "SBZBTTask_CoverAction.h"

USBZBTTask_CoverAction::USBZBTTask_CoverAction() {
    this->Operation = ESBZCoverOperation::EnterCover;
    this->bStayCrouched = false;
    this->bCanEditCoverPoint = true;
}


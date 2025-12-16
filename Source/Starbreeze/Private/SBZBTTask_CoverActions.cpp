#include "SBZBTTask_CoverActions.h"

USBZBTTask_CoverActions::USBZBTTask_CoverActions() {
    this->NodeName = TEXT("CoverActions");
    this->Operation = ESBZCoverActionOperation::Enter;
    this->bUpdateCharacter = false;
    this->bStayCrouched = false;
    this->bUpdateCoverPoint = false;
    this->bClearTargetCoverPoint = false;
    this->bCanEditCoverPoint = true;
    this->bCanEditTargetCoverPoint = true;
}



#include "SBZPrecomputedVisibilityCell.h"

FSBZPrecomputedVisibilityCell::FSBZPrecomputedVisibilityCell() {
    this->Idx = 0;
    this->bIsInActiveSet = false;
    this->bPlayerCanSee = false;
    this->bHasSetDirectionToPlayers = false;
}


#include "SBZDebugHUD.h"

ASBZDebugHUD::ASBZDebugHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->SmallFont = NULL;
    this->MediumFont = NULL;
    this->LargeFont = NULL;
}



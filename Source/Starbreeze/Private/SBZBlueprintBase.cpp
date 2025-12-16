#include "SBZBlueprintBase.h"

ASBZBlueprintBase::ASBZBlueprintBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->bDormant = true;
}



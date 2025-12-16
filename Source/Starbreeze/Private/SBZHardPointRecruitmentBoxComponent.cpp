#include "SBZHardPointRecruitmentBoxComponent.h"

USBZHardPointRecruitmentBoxComponent::USBZHardPointRecruitmentBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bAbsoluteRotation = true;
    this->bAbsoluteScale = true;
    this->Mobility = EComponentMobility::Static;
    this->bGenerateOverlapEvents = false;
}



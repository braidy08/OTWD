#include "OTWDCrowdFollowingComponent.h"

UOTWDCrowdFollowingComponent::UOTWDCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarricadeNavArea = NULL;
    this->ClumsyNavArea = NULL;
    this->ClumsyNavAreaLow = NULL;
    this->ClumsyNavAreaHigh = NULL;
    this->ClumsyNavAreaMega = NULL;
}



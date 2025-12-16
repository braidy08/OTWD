#include "SBZProximitySensorNavLinkManager.h"

ASBZProximitySensorNavLinkManager::ASBZProximitySensorNavLinkManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxComputedCharacterPerFrame = 0;
    this->PointCheckRadius = 1;
    this->PointCheckHeight = 1;
    this->NavLinkOctreeBoundsRadius = 1;
    this->NavLinkOctreeBoundsHeight = 1;
}

ASBZProximitySensorNavLinkManager* ASBZProximitySensorNavLinkManager::GetProximitySensorNavLinkManager(UObject* WorldContextObject) {
    return NULL;
}



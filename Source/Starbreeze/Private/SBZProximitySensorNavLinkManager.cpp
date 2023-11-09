#include "SBZProximitySensorNavLinkManager.h"

ASBZProximitySensorNavLinkManager* ASBZProximitySensorNavLinkManager::GetProximitySensorNavLinkManager(UObject* WorldContextObject) {
    return NULL;
}

ASBZProximitySensorNavLinkManager::ASBZProximitySensorNavLinkManager() {
    this->MaxComputedCharacterPerFrame = 0;
    this->PointCheckRadius = 1;
    this->PointCheckHeight = 1;
    this->NavLinkOctreeBoundsRadius = 1;
    this->NavLinkOctreeBoundsHeight = 1;
}


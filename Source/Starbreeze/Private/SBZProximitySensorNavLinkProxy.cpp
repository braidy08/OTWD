#include "SBZProximitySensorNavLinkProxy.h"

ASBZProximitySensorNavLinkProxy::ASBZProximitySensorNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
    this->bSmartLinkIsRelevant = true;
    this->DesactivationCoolDownDuration = 1;
    this->bOverrideDesactivationCoolDownDuration = false;
    this->DesactivationCoolDownDurationOverride = 1;
}

void ASBZProximitySensorNavLinkProxy::UpdateCoolDownTimer(float DeltaTime) {
}

void ASBZProximitySensorNavLinkProxy::SetLinkPathfindingAllowed(bool bInLinkPathfindingAllowed) {
}

void ASBZProximitySensorNavLinkProxy::SetCurrentCoolDownTimer(float InCurrentCoolDownTimer) {
}

bool ASBZProximitySensorNavLinkProxy::IsInForcedState() const {
    return false;
}

float ASBZProximitySensorNavLinkProxy::GetDesactivationCoolDownDuration() const {
    return 0.0f;
}



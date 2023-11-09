#include "SBZProximitySensorNavLinkProxy.h"

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

ASBZProximitySensorNavLinkProxy::ASBZProximitySensorNavLinkProxy() {
    this->DesactivationCoolDownDuration = 1;
    this->bOverrideDesactivationCoolDownDuration = false;
    this->DesactivationCoolDownDurationOverride = 1;
}


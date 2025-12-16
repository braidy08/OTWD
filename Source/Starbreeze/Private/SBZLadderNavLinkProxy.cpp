#include "SBZLadderNavLinkProxy.h"

ASBZLadderNavLinkProxy::ASBZLadderNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
}

void ASBZLadderNavLinkProxy::SetBeingClimbed(bool bInBeingClimbed) {
}

bool ASBZLadderNavLinkProxy::IsInForcedState() const {
    return false;
}

bool ASBZLadderNavLinkProxy::IsBeingClimbed() const {
    return false;
}



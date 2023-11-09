#include "SBZNavLinkProxyMontage.h"

void ASBZNavLinkProxyMontage::Multicast_PlayMontage_Implementation(ASBZAICharacter* Character) {
}

ASBZNavLinkProxyMontage::ASBZNavLinkProxyMontage() {
    this->AnimationMontage = NULL;
    this->TurnDuration = 1;
    this->Visitor = NULL;
}


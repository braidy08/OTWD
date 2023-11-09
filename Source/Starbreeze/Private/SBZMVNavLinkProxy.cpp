#include "SBZMVNavLinkProxy.h"

void ASBZMVNavLinkProxy::UseLink() {
}

bool ASBZMVNavLinkProxy::ReserveLink(ASBZCharacter* Occupant) {
    return false;
}

bool ASBZMVNavLinkProxy::IsLinkFree(ASBZCharacter* Occupant) {
    return false;
}

float ASBZMVNavLinkProxy::GetCoolDownDurationAfterUse() const {
    return 0.0f;
}

bool ASBZMVNavLinkProxy::FreeLink(ASBZCharacter* Occupant) {
    return false;
}

void ASBZMVNavLinkProxy::ForceFreeLink() {
}

void ASBZMVNavLinkProxy::ComputeTrajectories() {
}

ASBZMVNavLinkProxy::ASBZMVNavLinkProxy() {
    this->NavLinkDirection = ESBZMVNavLinkDirection::Automatic;
    this->VaultingSchematic = NULL;
    this->MantlingSchematic = NULL;
    this->DefaultCharacterClass = NULL;
    this->bKeepOnFloor = true;
    this->bDrawShapes = false;
    this->CoolDownDurationAfterUse = 1;
    this->bOverrideCoolDownDurationAfterUse = false;
    this->CoolDownDurationAfterUseOverride = 1;
}


#include "SBZPlayerGrapplePostProcessSingleBlendSettings.h"

FSBZPlayerGrapplePostProcessSingleBlendSettings::FSBZPlayerGrapplePostProcessSingleBlendSettings() {
    this->DefaultBlendTime = 1;
    this->bUseHealthBasedTransitionTime = false;
    this->HealthBasedTransitionTimeMinHealth = 1;
    this->HealthBasedTransitionTimeMaxHealth = 1;
}


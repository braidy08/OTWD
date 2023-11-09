#include "SBZEffectFieldDecalData.h"

FSBZEffectFieldDecalData::FSBZEffectFieldDecalData() {
    this->DecalLineTraceAmount = 0;
    this->DecalThickness = 1;
    this->BaseDecalMaterial = NULL;
    this->DetailDecalMaterial = NULL;
    this->ParticleSystem = NULL;
    this->FadeInScaleTime = 1;
    this->bUseMaterialFadeIn = false;
    this->FadeInParameterTime = 1;
    this->FadeOutTime = 1;
    this->FadeoutDuration = 1;
    this->bUseMaterialNormal = false;
}


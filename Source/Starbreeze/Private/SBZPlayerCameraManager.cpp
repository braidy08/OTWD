#include "SBZPlayerCameraManager.h"
#include "Components/PostProcessComponent.h"
#include "SBZDepthOfFieldComponent.h"
#include "SBZPlayerCameraFeedbackComponent.h"

UParticleSystemComponent* ASBZPlayerCameraManager::SpawnLensParticleEffect(UParticleSystem* ParticleSystem, float LifeTime) {
    return NULL;
}

void ASBZPlayerCameraManager::RemoveCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings) {
}

USBZPlayerCameraFeedbackComponent* ASBZPlayerCameraManager::GetPlayerCameraFeedbackComponent() const {
    return NULL;
}

float ASBZPlayerCameraManager::GetCurrentVerticalTopFOV() {
    return 0.0f;
}

float ASBZPlayerCameraManager::GetCurrentVerticalFOV() {
    return 0.0f;
}

void ASBZPlayerCameraManager::AddOrUpdateCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings) {
}

ASBZPlayerCameraManager::ASBZPlayerCameraManager() {
    this->GrapplePostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("GrapplePostProcessComponent"));
    this->DepthOfFieldComponent = CreateDefaultSubobject<USBZDepthOfFieldComponent>(TEXT("DepthOfFieldComponent"));
    this->DefaultDepthOfFieldComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("DefaultDepthOfFieldComponent"));
    this->PlayerCameraFeedbackComponent = CreateDefaultSubobject<USBZPlayerCameraFeedbackComponent>(TEXT("PlayerCameraFeedbackComponent"));
    this->DefaultDOFMaxDistance = 1;
    this->LensEffectParent = NULL;
    this->ActiveCameraViewRestrictionId = 0;
}

